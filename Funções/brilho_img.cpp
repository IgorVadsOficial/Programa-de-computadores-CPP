#include <iostream>
using namespace std;

const int LINHAS = 3;
const int COLUNAS = 4;

void aplicarFiltro(int matriz[LINHAS][COLUNAS], int fator)
{
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            matriz[i][j] = matriz[i][j] * fator;
        }
    }
}

void corrigirExcesso(int matriz[LINHAS][COLUNAS])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] > 255)
            {
                matriz[i][j] = 255;
            }
        }
    }
}

void exibirImagem(int matriz[LINHAS][COLUNAS])
{

    cout << "Matriz: " << endl;
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{

    int fator;
    int filtro[LINHAS][COLUNAS]{{10, 20, 30, 40}, {50, 60, 70, 80}, {80, 90, 100, 110}};

    cout << "Escreva o fator que quer adicionar na sua imagem: " << endl;
    cin >> fator;

    aplicarFiltro(filtro, fator);

    corrigirExcesso(filtro);

    exibirImagem(filtro);

    return 0;
}