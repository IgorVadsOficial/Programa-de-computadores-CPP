#include <iostream>
using namespace std;

int main () {

int numeros[10];

int numero, cont = 0;;

for (int i = 0; i <= 10; i++)
{
    cout << "Digite um número" << endl;
    cin >> numeros[i];
}

cout << "Digite o número que deseja encontrar: " << endl;
cin >> numero;

for (int i = 0; i <= 10; i++)
{
    if (numeros[i] == numero) {
        cont++;}

    else {cout << "Numero nao encontrado" << endl;} 
    }

return 0;}