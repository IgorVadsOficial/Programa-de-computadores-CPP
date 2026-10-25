#include <iostream>
using namespace std;

int main () {

int notas[6] = {100,50,20,10,5,2};
int valor,quant;

cout << "Digite o valor que deseja sacar do caixa: ";
    cin >> valor;

for (int i = 0; i < 6; i++){

quant = valor / notas[i];
valor = valor % notas[i];

cout << "Cedulas de R$ " << notas[i] << ": " << quant << endl;}

if (valor != 0) 
{cout << "Valor restante nao pode ser sacado: R$ " << valor << endl;}

return 0;}