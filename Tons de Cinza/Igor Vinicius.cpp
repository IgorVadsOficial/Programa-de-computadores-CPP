#include <iostream>
#include <fstream>
using namespace std;

void Imagem(int tamanho[1][2], double media = 0, double soma = 0)
{
    ifstream imagem("imagem.txt");

    if (imagem.is_open())
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                imagem >> tamanho[i][j];
            }
        }
    }

    else
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }

    int color[tamanho[0][0]][tamanho[0][1]];

    for (int i = 0; i < tamanho[0][0]; i++)
    {
        for (int j = 0; j < tamanho[0][1]; j++)
        {
            imagem >> color[i][j];
            soma = soma + color[i][j];
        }
    }

    cout << "Soma: " << soma << endl;
    media = soma / (tamanho[0][0] * tamanho[0][1]);

    cout << "Media dos valores: " << media << endl;

    imagem.close();
}

int main()
{
    int tamanho[1][2];
    double media = 0;
    double soma = 0;
    Imagem(tamanho, media, soma);

    return 0;
}