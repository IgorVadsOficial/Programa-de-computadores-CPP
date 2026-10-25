#include <iostream>
using namespace std;

int main () {

int mA[7][7];
int mB[7][7];


cout << "Matriz A: " << endl;
for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
         cout << i+1 << "o = ";
         cin >> mA[i][j];
        } 
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == j && (i+1) % 2 == 1)
            {int fatorial = 1;
                for (int k = 1; k <= mA[i][j]; k++)
                {fatorial = fatorial * k;} 
            mB[i][j] = fatorial;     
            }
            else {

            int soma = 0;
            for (int k = 1; k <= mA[i][j]; k++)
            {
                soma = soma + k;
            }

            mB[i][j] = soma;}
        } 
    }

cout << endl; 
    cout << "Matriz A: " << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
         cout << mA[i][j] << "\t ";
        }
        cout << endl; 
    }

cout << endl; 
    cout << "Matriz B: " << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
         cout << mB[i][j] << "\t ";
        }
        cout << endl; 
    }

return 0;}