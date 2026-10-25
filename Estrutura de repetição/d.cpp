#include <iostream>
using namespace std;

int main () {
    
    int soma = 0;

    for (int i = 0; i <= 500; i++)
    {   if (i % 2 == 0)
    {
        soma = soma + i;
    }
        cout << "O somatorio dos valores pares existentes na faixa de 1 até 500: " << soma << endl;
    }
    
    
    return 0;}