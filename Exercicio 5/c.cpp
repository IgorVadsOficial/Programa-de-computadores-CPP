#include <iostream>
using namespace std;

int main () {
    
    int soma = 0;
    
    for (int i = 0; i <= 100; i++)
    {
        soma = soma + i;

        cout << "A soma dos 100 primeiros numeros inteiros eh: " << soma << endl;
    }
    
    return 0;}