#include <iostream>
using namespace std;

int main () {

    double c[100];
    double u = 0;
    double soma = 0;

cout << "Controle Estatistico de Processo (CEP) " << endl;
for (int i = 0; i < 100; i++)
    {
        cout << i + 1 << "o = ";
        cin >> c[i];
    }

for (int i = 0; i < 100; i++)
    {
        soma = soma + c[i];
    }
    
    u = soma / 100;

    double limite_superior = u * 1.15;
    double limite_inferior = u * 0.85;

    for (int i = 0; i < 100; i++)
    {
    if (c[i] > limite_superior)
    {
        cout << "Indiaces: " << i + 1 << " eh um gargalo crítico" << endl;
    }

    else if (c[i] < limite_inferior)
    {
        cout << "Indices: " << i + 1 << " eh uma superprodução instável" << endl;
    }
    }
    
    cout << "Tempo total do lote: " << soma << endl;

return 0;}