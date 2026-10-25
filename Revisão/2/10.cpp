#include <iostream>
using namespace std;

int main()
{

    double salario;

    cout << "Digite seu salario atua: R$";
    cin >> salario;

    cout << "Novo salario = R$" << salario + (salario * 0.15);

    return 0;
}