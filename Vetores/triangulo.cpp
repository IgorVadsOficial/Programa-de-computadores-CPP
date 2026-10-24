#include <iostream>
using namespace std;

int main () {

int valor;

    cout << "Digite o valor (impar): ";
        cin >> valor;

int valores[valor] = {};

for (int i = 0; i <= valor; i++)
{
    valores[i] = i + 1;
}

int inicio = 0;
int fim = valor - 1;

while (inicio <= fim){

   for (int i = 0; i < valor; i++)
   {cout << " " << endl; }
   
    for (int i = inicio; i <= fim; i++) {
        cout << valores[i] << " ";
    }
    cout << endl;

    inicio++;
    fim--;
}




return 0;}