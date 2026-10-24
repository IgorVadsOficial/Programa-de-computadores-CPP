#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int TAM = 4;

void Escrita(double dados[TAM][TAM])
{
    ofstream termico("mapa_termico.txt");

    srand(time(NULL));
    if (termico.is_open())
    {
        for (int i = 0; i < TAM; i++)
        {
            for (int j = 0; j < TAM; j++)
            {
                dados[i][j] = rand() % (42 - 15 + 1) + 15;
                termico << dados[i][j] << "\t";
            }
            termico << endl;
        }
    }

    if (!termico.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo!" << endl;
    }

    termico.close();
}

void Leitura(double dadosv2[TAM][TAM])
{
    double media;
    double soma = 0;
    double linMaior;
    double colMaior;
    double maior = 0;

    ifstream termico("mapa_termico.txt");

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            termico >> dadosv2[i][j];
            soma = soma + dadosv2[i][j];
            media = soma / (TAM * TAM);
            if (dadosv2[i][j] > maior)
            {
                maior = dadosv2[i][j];
                linMaior = i;
                colMaior = j;
            }

            if (dadosv2[i][j] > 38.0)
            {
                cout << "Tempeatura de alerta = " << dadosv2[i][j] << "o " << endl;
            }
        }
    }

    cout << "Media: " << media << endl;
    cout << "Maior temperatura registrada foi: " << maior << "o " << "e esta na cordenada linha " << linMaior << " e coluna " << colMaior << "." << endl;
    termico.close();

    if (!termico.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo!" << endl;
    }
}

int main()
{
    double dados[TAM][TAM];
    double dadosv2[TAM][TAM];
    Escrita(dados);
    Leitura(dadosv2);
    return 0;
}
