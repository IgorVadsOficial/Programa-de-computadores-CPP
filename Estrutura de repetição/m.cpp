#include <iostream>
using namespace std;

int main () {

    float soma = 0;
    float media = 0;

    for (int i = 1; i <= 10; i++)
    {
         soma = soma + i;
    }

    media = soma / 10.0;
    cout << "Somatorio: " << soma << " " << endl;
    cout << "Media: " << media << " " << endl;
    
    return 0;}