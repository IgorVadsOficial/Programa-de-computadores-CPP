#include <iostream>
using namespace std;

int main () {
    
    int resultado, base, expoente;

    cout << "Digite o valor da sua base: ";
        cin >> base;
    cout << "Digite o valor do seu expoente ";
        cin >> expoente;

    resultado = 1;

    for (int i = 1; i <= expoente; i++)
    {
            resultado = resultado * base;
    }
    
cout << "Resultado = " << resultado << endl;
    return 0;}