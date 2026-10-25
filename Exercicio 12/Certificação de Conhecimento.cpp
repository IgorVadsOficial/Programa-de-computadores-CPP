#include <iostream>
#include <cstdlib>
using namespace std;

void LerSenha(string &codigo, string &senha)
{
    const string codigo_usuario = "1234";
    const string senha_usuario = "9999";

    cout << "Digite o seu codigo de usuario: " << endl;
    cin >> codigo;

    if (codigo != codigo_usuario)
    {
        cout << "Usuario invalido!." << endl;
    }
    else
    {
        cout << "Digite a senha do usuario: " << endl;
        cin >> senha;
    }

    if (senha != senha_usuario)
    {
        cout << "Senha incorreta!" << endl;
    }

    else
    {
        cout << "Acesso permitido!" << endl;
    }
}

void AcharX(int vetA[100])
{
    int valorX;

    cout << "Digite o valor de X: " << endl;
    cin >> valorX;

    for (int i = 0; i < 100; i++)
    {
        vetA[i] = rand() % 100;

        if (vetA[i] != valorX)
        {
            cout << "NAO ACHEI: " << vetA[i] << endl;
        }

        else if (vetA[i] == valorX)
        {
            cout << "ACHEI: " << vetA[i] << endl;
            break;
        }
    }
}

void MostrarFatorial(int valor)
{

    int fatorial = 1;
    int cont = 0;

    if (valor <= 0)
    {
        cout << "So e possivel calcular a fatorial de numeros maiores que 0." << endl;
    }

    else
    {
        for (int i = 1; i <= valor; i++)
        {
            fatorial = fatorial * i;
            cont++;
        }

        for (int i = 1; i < valor; i++)
        {
            if (fatorial % 2 == 0)
            {
                cout << "Fatorial de: " << valor << endl;
                cout << cont << "! = ";
                for (int j = cont; j <= valor; j--)
                {
                    if (j >= 1)
                    {
                        cout << j << ". ";
                    }
                }
                cout << " = " << fatorial << " - par. ";
            }

            else
            {
                cout << "Fatorial de: " << valor << endl;
                cout << cont << "! = ";
                for (int j = cont; j <= valor; j--)
                {
                    if (j >= 1)
                    {
                        cout << j << ". ";
                    }
                }
                cout << "= " << fatorial << " - impar. ";
            }
        }
    }
}

void LerMatrizes(int matA[10][10], int matB[10][10])
{
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matA[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matB[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                soma = soma + matA[i][j] + matB[i][j];
            }

            if (i + j == 9)
            {
                if (matA[i][j] < 10)
                {
                    matA[i][j] = 0;
                }
                if (matB[i][j] < 10)
                {
                    matB[i][j] = 0;
                }
            }
        }
    }

    cout << "Matriz A:" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << matA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz B:" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << matB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSoma da diagonal principal: " << soma << endl;
}

int main()
{

    int qst;

    cout << "DIGITE O NUMERO DA QUESTAO: " << endl;
    cin >> qst;

    if (qst == 1)
    {
        string codigo, senha;
        LerSenha(codigo, senha);
    }

    if (qst == 2)
    {
        int vet[100];
        AcharX(vet);
    }

    if (qst == 3)
    {
        int valor;

        cout << "Digite o valor que seja descobrir o fatorial: " << endl;
        cin >> valor;

        MostrarFatorial(valor);
    }

    if (qst == 4)
    {
        int matA[10][10], matB[10][10];
        LerMatrizes(matA, matB);
    }
}