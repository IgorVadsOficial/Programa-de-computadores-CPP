#include <iostream>
#include <string>
using namespace std;

void estoque(string produto[5], int quantidade[5], float media = 0, int soma = 0)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o nome do produto: ";
        cin >> produto[i];

        cout << "Digite a quantidade: ";
        cin >> quantidade[i];
    }

    for (int i = 0; i < 5; i++)
    {
        soma = soma + quantidade[i];
    }

    media = soma / 5;
    cout << "Media da quantidade de produtos = " << media << endl;

    for (int i = 0; i < 5; i++)
    {
        if (quantidade[i] < 5)
        {
            cout << produto[i] << " Status: Reposiçao Urgente" << endl;
        }
        else if (quantidade[i] < media)
        {
            cout << produto[i] << " Status: Reposiçao Recomendada" << endl;
        }
    }
}

void mapeamento(float grade[4][4], float maior = 0, int cont = 0)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Digite o valor do quadrante " << i + 1 << " = " << endl;
            cin >> grade[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                if (grade[i][j] > maior)
                {
                    maior = grade[i][j];
                }
            }
            if (grade[i][j] < 0)
            {
                cont++;
            }
        }
    }

    cout << "O maior valor encontrado foi: " << maior << endl;
    cout << "Foram encontrados " << cont << " pontos abaixo do nivel do mar. " << endl;
}

void festival(float avalicao[3][4], float notas_media[4])
{
    //Preenche a matriz e impede que o usuario escreva um numero fora a margem de entre 0 e 10.
    float nota = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Digite a nota do filme: " << endl;
            cin >> nota;

            while (nota < 0 || nota > 10)
            {
                cout << "Nota invalida, digite um valor entre 0 e 10 " << endl;
                cin >> nota;
            }
            avalicao[i][j] = nota;
        }
    }

    // Faz a soma de todas as notas e depois faz a media divido pela quantidade de jurados.
    for (int j = 0; j < 4; j++)
    {
        float soma = 0;
        for (int i = 0; i < 3; i++)
        {
            soma = soma + avalicao[i][j];
        }
        notas_media[j] = soma / 3;
    }

    float media_maior = notas_media[0];
    int indicador_de_vencedor = 0;

    //Calcula a maior media e descobre a posicao do vencedor na matriz e depois exibe o vencedor e a qual foi a sua media.
    for (int j = 0; j < 4; j++)
    {
        cout << "Media do filme " << (j + 1) << ": " << notas_media[j] << endl;
        if (notas_media[j] > media_maior)
        {
            media_maior = notas_media[j];
            indicador_de_vencedor = j;
        }
        if (notas_media[j] < 5.0)
        {
            cout << "O filme " << (j + 1) << " nao atingiu a nota minima para exibiçao." << endl;
        }
    }
    cout << "O vencedor do festival foi: " << (indicador_de_vencedor + 1) << " com media de " << media_maior << " pontos" << endl;
}

int main()
{
    int ops;
    cout << "Digite o numero da questao: ";
    cin >> ops;

    string produto[5];
    int quantidade[5];
    float grade[4][4];
    float avaliacao[3][4];
    float notas_media[4];

    switch (ops)
    {
    case 1:
        estoque(produto, quantidade);
        break;

    case 2:
        mapeamento(grade);
        break;

    case 3:
        festival(avaliacao, notas_media);
        break;

    default:
        cout << "Nao existe a opcao " << ops << endl;
        break;
    }

    return 0;
}