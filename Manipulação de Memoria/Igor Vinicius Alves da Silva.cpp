#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

int BuscarContatoNumero()
{
    ifstream agenda("agenda.txt");
    string numero;
    string linha;
    int numerolinha = 0;
    bool encontrou;

    cout << "Numero do Contato: ";
    cin >> numero;

    if (!agenda.is_open())
    {
        cout << "Erro ao abrir contatos!" << endl;
        return 1;
    }
    else
    {
        while (getline(agenda, linha))
        {
            numerolinha++;

            if (linha.find(numero) != string::npos)
            {
                cout << "Palavra encontrada na linha " << numerolinha << ": " << linha << endl;
                encontrou = true;
            }
        }
    }

    if (!encontrou)
    {
        cout << "O contato nao foi encontrada na agenda." << endl;
    }
    return 0;
}

int CadastrarContato()
{

    ofstream agenda("agenda.txt", ios::app);

    if (!agenda.is_open())
    {
        cerr << "Erro ao abrir a agenda!" << endl;
        return 1;
    }

    string nome;
    string numero;

    cout << "Nome: ";
    cin >> nome;
    agenda << nome << " ";

    cout << "Numero: ";
    cin >> numero;
    agenda << numero << endl;

    agenda.close();
    return 0;
}

int BuscarContatoNome()
{

    ifstream agenda("agenda.txt");
    string nome;
    string linha;
    int numerolinha = 0;
    bool encontrou;

    cout << "Nome do Contato: ";
    cin >> nome;

    if (!agenda.is_open())
    {
        cout << "Erro ao abrir contatos!" << endl;
        return 1;
    }
    else
    {
        while (getline(agenda, linha))
        {
            numerolinha++;

            if (linha.find(nome) != string::npos)
            {
                cout << "Palavra encontrada na linha " << numerolinha << ": " << linha << endl;
                encontrou = true;
            }
        }
    }

    if (!encontrou)
    {
        cout << "O contato nao foi encontrada na agenda." << endl;
    }
}

int main()
{
    int ops;

    cout << "=========================================" << endl;
    cout << "| 1 - Cadastrar novos contatos na agenda. |" << endl;
    cout << "=========================================" << endl;
    cout << "| 2 - Buscar contato pelo telefone.       |" << endl;
    cout << "=========================================" << endl;
    cout << "| 3 - Buscar contato pelo nome.           |" << endl;
    cout << "=========================================" << endl;

    cout << endl;

    cout << "O que deseja fazer? ";
    cin >> ops;

    switch (ops)
    {
    case 1:
    {
        CadastrarContato();
        break;
    }

    case 2:
    {
        BuscarContatoNumero();
        break;
    }

    case 3:
    {
        BuscarContatoNome();
        break;
    }

    default:
    {
        cout << "Erro, numero invalido!" << endl;
        break;
    }
    }
    return 0;
}