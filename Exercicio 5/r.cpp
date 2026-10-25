#include <iostream>
using namespace std;

int main () {
    
    int n, maior, menor;
    float valor;

    cout << "Quantos valores voce quer calcular?" << endl;
        cin >> n;

    for (int i = 1; i <= n; i++)
    {cout << "Digite o " << i << " valor: " << endl;
            cin >> valor; 

        if (valor < 0)
        {break;}

        if (i == 1)
        {maior = valor;
        menor = valor;}
        
        else if (valor > maior)
        {maior = valor;}
        
        else if (valor < menor)
        {menor = valor;}
    }
    
    cout << "Maior numero: " << maior << endl;
    cout << "Menor numero: " << menor << endl;
    return 0;}
