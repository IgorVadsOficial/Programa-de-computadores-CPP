#include <iostream>
using namespace std;

int main() {
    
    float media = 0, soma = 0, contador = 1;
    
    cout << "Resultados da soma e da média dos numeros situados na faixa entre 50 e 70." << endl;
    cout << "==========================================" << endl;
    
    for(int i = 50; i <= 70; i++) 
    {
        if (i % 2 == 0)
        {
            soma = soma + i;
            contador++;
        }
        
    }

    media = soma / contador;
    cout << "Somatorio: " << soma << endl;
    cout << "Media: " << media << endl;
    
    return 0;}