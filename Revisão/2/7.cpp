#include <iostream>
using namespace std;

int main()
{
    double valor;

    cout << "Valor do produto: ";
    cin >> valor;

    cout << "Valor do produto com desconto = " << valor - (valor * 0.10) << endl;

    return 0;
}