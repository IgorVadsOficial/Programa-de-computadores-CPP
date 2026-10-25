#include <iostream>
using namespace std;

int main () {

float mA [8][6];
float mB [8] = {0};
float soma = 0;

cout << "Matriz A: " << endl;
for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
         cout << i+1 << "o = ";
         cin >> mA[i][j];
        } 
    }

for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
        mB[i] = mB[i] + mA[i][j];
        } 
    }

    for (int i = 0; i < 8; i++)
    {
        soma = soma + mB[i];
    }

cout << endl; 
    cout << "Matriz A: " << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
         cout << mA[i][j] << "\t ";
        }
        cout << endl; 
    }

   cout << endl; 
    cout << "Matriz B: " << endl;
    for (int i = 0; i < 8; i++)
    {
         cout << mB[i] << "\t ";
    } 

  cout << "Somátório total: " << soma << endl;


return 0;}