#include <iostream>
using namespace std;

int main()
{

    double conta;

    cout << "Digite o valor da conta: R$";
    cin >> conta;

    cout << "Cada amigo deve pagar: R$" << conta / 3 << endl;

    return 0;
}