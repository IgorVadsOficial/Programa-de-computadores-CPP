#include <iostream>
using namespace std;

int main () {

int mA [4][5];
int mB [4] = {0};
int mC [5] = {0};
int soma_total = 0;
int somaB = 0;
int somaC = 0;

cout << "Matriz A: " << endl;
for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         cout << i+1 << "o = ";
         cin >> mA[i][j];
        } 
    }

for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mB[i] = mB[i] + mA[i][j];
            mC[j] = mC[j] + mA[i][j];
        } 
    }

    for (int i = 0; i < 4; i++)
    {
        somaB = somaB + mB[i];
    }

        for (int i = 0; i < 5; i++)
    {
        somaC = somaC + mC[i]; 
    }

    soma_total = somaB + somaC;

    cout << endl; 
    cout << "Matriz A: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         cout << mA[i][j] << "\t ";
        }
        cout << endl; 
    }

   cout << endl; 
    cout << "Matriz B: " << endl;
    for (int i = 0; i < 4; i++)
    {
         cout << mB[i] << "\t ";
    } 

       cout << endl; 
    cout << "Matriz C: " << endl;
    for (int i = 0; i < 5; i++)
    {
         cout << mC[i] << "\t ";
    } 

  cout << "Somátório total da Matriz B + Matriz C: " << soma_total << endl;

return 0;}