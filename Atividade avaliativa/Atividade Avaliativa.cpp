    #include <iostream>
#include <fstream>
using namespace std;

double **carregar_dados(int tamanho[1][2], int &linhas, int &colunas)
{
    ifstream dados("dados_ambientais.txt");

    if (!dados.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
        return 0;
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            dados >> tamanho[i][j];
        }
    }

    linhas = tamanho[0][0];
    colunas = tamanho[0][1];

    double **valores = new double *[linhas];
    for (int i = 0; i < linhas; i++)
    {
        valores[i] = new double[colunas];
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            dados >> valores[i][j];
        }
    }

    dados.close();
    return valores;
}

double *calcular_medias(double **valores, int linhas, int colunas)
{
    double *medias = new double[linhas];

    for (int i = 0; i < linhas; i++)
    {
        double soma = 0;
        for (int j = 0; j < colunas; j++)
        {
            soma += valores[i][j];
        }
        medias[i] = soma / colunas;
    }

    return medias;
}

void salvar_relatorio(double *medias, int linhas)
{
    ofstream relatorio("relatorio_regioes.txt");

    for (int i = 0; i < linhas; i++)
    {
        relatorio << "Regiao " << (i + 1) << ": " << medias[i] << endl;
        cout << "Regiao " << (i + 1) << ": " << medias[i] << endl;
    }

    relatorio.close();

    cout << "Relatorio salvo em relatorio_regioes.txt" << endl;
}

void detectar_anomalias(double **valores, int linhas, int colunas, double limite)
{
    cout << "Anomalias encontradas (valores acima de " << limite << "):" << endl;

    bool encontrou = false;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (valores[i][j] > limite)
            {
                cout << "Linha " << (i + 1) << ", Coluna " << (j + 1)
                     << " -> Valor: " << valores[i][j] << endl;
                encontrou = true;
            }
        }
    }

    if (!encontrou)
    {
        cout << "Nenhuma anomalia encontrada." << endl;
    }
}

void corrigir_ruidos(double **valores, int linhas, int colunas)
{
    cout << "Corrigindo valores negativos..." << endl;

    bool corrigiu = false;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (valores[i][j] < 0)
            {
                valores[i][j] = 0.0;
                cout << "Linha " << (i + 1) << ", Coluna " << (j + 1) << " -> valor corrigido para 0" << endl;
                corrigiu = true;
            }
        }
    }

    if (!corrigiu)
    {
        cout << "Nenhum ruido encontrado." << endl;
    }
}

void atualizar_matriz_arquivo(double **valores, int linhas, int colunas)
{
    ofstream saida("dados_limpos.txt");

    if (!saida.is_open())
    {
        cout << "Nao foi possivel criar o arquivo dados_limpos.txt" << endl;
        return;
    }

    saida << linhas << " " << colunas << endl;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            saida << valores[i][j];
            if (j < colunas - 1)
            {
                saida << " ";
            }
        }
        saida << endl;
    }

    saida.close();

    cout << "Matriz atualizada salva em dados_limpos.txt" << endl;
}

int main()
{
    int tamanho[1][2] = {{0, 0}};
    int linhas = 0, colunas = 0;
    double **valores = carregar_dados(tamanho, linhas, colunas);
    double *medias = calcular_medias(valores, linhas, colunas);
    salvar_relatorio(medias, linhas);
    
    double limite;
    cout << "Digite o valor limite (threshold) de poluicao: ";
    cin >> limite;

    detectar_anomalias(valores, linhas, colunas, limite);
    corrigir_ruidos(valores, linhas, colunas);
    atualizar_matriz_arquivo(valores, linhas, colunas);

    return 0;
}