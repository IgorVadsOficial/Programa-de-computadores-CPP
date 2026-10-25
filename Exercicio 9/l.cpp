#include <iostream>
using namespace std;

int main () {

int mA [15][15];

cout << "Matriz A: " << endl;
for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
         cout << i+1 << "o = ";
         cin >> mA[i][j];
        } 
    }

int soma = 0;

for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
         if (i == j && mA[i][j] % 2 == 0)
         {
            soma = soma + mA[i][j];
         }
         
        } 
    }

    cout << "Soma da diagonal principal: " << soma << endl;

return 0;}