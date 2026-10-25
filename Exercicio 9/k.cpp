#include <iostream>
using namespace std;

int main () {

float mA [5][5];

cout << "Matriz A: " << endl;
for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         cout << i+1 << "o = ";
         cin >> mA[i][j];
        } 
    }

int soma = 0;

for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         if (i==j)
         {
            soma = soma + mA[i][j];
         }
         
        } 
    }

    cout << "Soma da diagonal principal: " << soma << endl;

return 0;}