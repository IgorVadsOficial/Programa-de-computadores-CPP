#include <iostream>
using namespace std;

int main () {
    
    int a, b, c, soma;

    cout << "Digite o primeiro numero: ";
        cin >> a;

    cout << "Digite o segundo numero: ";
        cin >> b;

    cout << "Digite o terceiro numero: ";
        cin >> c;

    soma = a + b + c;
    
    if (soma >= 100)
        {cout << "A soma dos seus valores eh: " << soma << endl;}
    
    return 0;}