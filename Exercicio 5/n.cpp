#include <iostream>
using namespace std;

int main () {

float soma = 0, media = 0;
int n, contador = 0, valores;

cout << "Digite a quantidade de valores: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
    cout << "Digite o " << i << "° valor: " << endl;
        cin >> valores;

        if (valores < 0) 
    {
        break;
    }
        soma = soma + valores;
        contador++;
    }

    if (contador > 0) {
        media = soma / contador;  
    } else {
        media = 0;
    }

    cout << "Somatorio: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Total de numeros lidos: " << contador << endl;

return 0;}