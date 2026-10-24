#include <iostream>
using namespace std;

int main () {

int mA [7][7];

cout << "Matriz A: " << endl;
for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
         cout << i+1 << "o = ";
         cin >> mA[i][j];
        } 
    }

int cont = 0;

for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
         if (mA[i][j] % 2 == 0)
         {
           cont++;
         }
         
        } 
    }

    cout << "Total de pares na Matriz: " << cont << endl;

return 0;}