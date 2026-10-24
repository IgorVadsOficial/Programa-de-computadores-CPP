#include <iostream>
#include <string>
using namespace std;

int main () {

    int idade[5];
    string nome[5];
    string name;
    bool achou = false;
    int pos = -1;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o nome: ";
        cin >> nome[i];
        cout << "Digite a idade: ";
        cin >> idade[i];
    }

    cout << "Digite o nome da pessoa que deseja descobrir a idade: ";
    cin >> name;

    for (int i = 0; i < 5; i++)
    {
        if (nome[i] == name)
        {
            pos = i;
            achou = true;
            break;
        }
    }

    if (achou)
    {
        cout << "Idade encontrada" << endl;
        cout << name << " tem " << idade[pos] << " anos de idade!" << endl;
    }
    else
    {
        cout << "Nome nao encontrado!" << endl;
    }

    return 0;
}