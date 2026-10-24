#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void carregar_dados(int &linha, int &coluna)
{
    ifstream dados("dados_ambientais.txt");

    if (!dados.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo dados_ambientais.txt" << endl;
    }

    else
    {
        int tamanho[1][2];

        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                dados >> tamanho[i][j];
            }
        }

        linha = tamanho[0][0];
        coluna = tamanho[0][1];

        double valores[linha][coluna];

        for (int i = 0; i < linha; i++)
        {
            for (int j = 0; j < coluna; j++)
            {
                dados >> valores[i][j];
            }
        }
        dados.close();
    }
}

void calcular_medias(int &linha, int &coluna)
{

    ifstream dados("dados_ambientais.txt");
    ofstream md("media.txt");

    if (!md.is_open())
    {
        cout << "Nao foi possivel criar o arquivo media.txt" << endl;
    }

    if (!dados.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo dados_ambientais.txt" << endl;
    }
    else
    {
        int tamanho[1][2];

        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                dados >> tamanho[i][j];
            }
        }

        linha = tamanho[0][0];
        coluna = tamanho[0][1];

        double valores[linha][coluna];
        double media[linha];

        for (int i = 0; i < linha; i++)
        {
            double soma = 0;
            for (int j = 0; j < coluna; j++)
            {
                dados >> valores[i][j];
                soma = soma + valores[i][j];
            }
            media[i] = soma / coluna;
            md << media[i] << endl;
        }
    }
    dados.close();
    md.close();
}

void salvar_relatorio(int &linha)
{
    ofstream relatorio("relatorio_regioes.txt");
    ifstream dados("dados_ambientais.txt");
    ifstream md("media.txt");

    if (!relatorio.is_open())
    {
        cout << "Nao foi possivel criar o arquivo relatorio_regioes.txt" << endl;
    }

    if (!dados.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo dados_ambientais.txt" << endl;
    }

    if (!md.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo media.txt" << endl;
    }

    int tamanho[1][2];

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            dados >> tamanho[i][j];
        }
    }

    linha = tamanho[0][0];

    double medias[linha];

    for (int i = 0; i < linha; i++)
    {
        md >> medias[i];
    }

    cout << endl;

    for (int i = 0; i < linha; i++)
    {
        relatorio << "Regiao " << (i + 1) << ": " << medias[i] << endl;
        cout << "Regiao " << (i + 1) << ": " << fixed << setprecision(2) << medias[i] << endl;
    }

    relatorio.close();
    dados.close();
    md.close();

    cout << endl;
    cout << "Relatorio salvo em relatorio_regioes.txt" << endl;
    cout << endl;
}

void detectar_anomalias(int &linha, int &coluna)
{
    ifstream dados("dados_ambientais.txt");

    if (!dados.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo dados_ambientais.txt" << endl;
    }

    else
    {
        double valores[linha][coluna];
        int limite = 15;

        for (int i = 0; i < linha; i++)
        {
            for (int j = 0; j < coluna; j++)
            {
                dados >> valores[i][j];

                if (valores[i][j] > limite)
                {
                    cout << "Linha " << (i + 1) << ", Coluna " << (j + 1) << " -> Valor: " << valores[i][j] << endl;
                }
            }
        }
    }
    dados.close();
}

void corrigir_ruidos(int &linha, int &coluna)
{

    ifstream dados("dados_ambientais.txt");
    ofstream matriz_limpa("matriz_limpa.txt");

    if (!matriz_limpa.is_open())
    {
        cout << "Nao foi possivel criar o arquivo matriz_limpa.txt" << endl;
    }

    if (!dados.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo dados_ambientais.txt" << endl;
    }

    else
    {
        double valores[linha][coluna];

        bool corrigiu = false;
        for (int i = 0; i < linha; i++)
        {
            for (int j = 0; j < coluna; j++)
            {
                dados >> valores[i][j];
                if (valores[i][j] < 0)
                {
                    valores[i][j] = 0.0;
                    cout << "Linha " << (i + 1) << ", Coluna " << (j + 1)
                         << " -> valor corrigido para 0" << endl;
                    corrigiu = true;
                }

                if (j == coluna - 1)
                    matriz_limpa << valores[i][j] << endl;
                else
                    matriz_limpa << valores[i][j] << " ";
            }
        }
        if (!corrigiu)
        {
            cout << endl;
            cout << "Nao foi preciso corrigir o indice" << endl;
        }
    }
    matriz_limpa.close();
    dados.close();
}

void atualizar_matriz_arquivo(int &linha, int &coluna)
{

    ifstream matriz_limpa("matriz_limpa.txt");
    ofstream dados_limpos("dados_limpos.txt");

    if (!dados_limpos.is_open())
    {
        cout << "Nao foi possivel criar o arquivo dados_limpos.txt" << endl;
    }

    if (!matriz_limpa.is_open())
    {
        cout << "Nao foi possivel ler o arquivo matriz_limpa.txt" << endl;
    }

    else
    {
        double valores[linha][coluna];
        for (int i = 0; i < linha; i++)
        {
            for (int j = 0; j < coluna; j++)
            {
                matriz_limpa >> valores[i][j];
                dados_limpos << valores[i][j] << " ";
            }
            dados_limpos << endl;
        }
    }
    dados_limpos.close();
    matriz_limpa.close();
}
int main()
{
    ifstream dados("dados_ambientais.txt");

    int tamanho[1][2];

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            dados >> tamanho[i][j];
        }
    }

    int linha = tamanho[0][0];
    int coluna = tamanho[0][1];

    carregar_dados(linha, coluna);
    calcular_medias(linha, coluna);
    salvar_relatorio(linha);
    detectar_anomalias(linha, coluna);
    corrigir_ruidos(linha, coluna);
    atualizar_matriz_arquivo(linha, coluna);

    dados.close();
    return 0;
}