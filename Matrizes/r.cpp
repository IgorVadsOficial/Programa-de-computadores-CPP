#include <iostream>
using namespace std;

int main () {

int mA[4];
int mB[4];
int mC[4];
int mD[4];
int mE[4][4];

cout << "Matriz A: " << endl;
for (int i = 0; i < 4; i++)
    {
         cout << i+1 << "o = ";
         cin >> mA[i];
    }

    cout << endl;
    cout << "Matriz B: " << endl;
for (int i = 0; i < 4; i++)
    {
         cout << i+1 << "o = ";
         cin >> mB[i];
    }

    cout << endl;
    cout << "Matriz C: " << endl;
for (int i = 0; i < 4; i++)
    {
         cout << i+1 << "o = ";
         cin >> mC[i];
    }

    cout << endl;
    cout << "Matriz D: " << endl;
for (int i = 0; i < 4; i++)
    {
         cout << i+1 << "o = ";
         cin >> mD[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
       mE[0][j] = mA[j] * 2;
       mE[1][j] = mB[j] * 3;
       mE[2][j] = mC[j] * 4;
        
       int fatorial = 1;
       for (int k = 1; k <= mD[j]; k++)
       {
        fatorial = fatorial * k;
       }
        mE[3][j] = fatorial;
        }
    }
    cout << endl; 

    cout << "Matriz A: " << endl;
    for (int i = 0; i < 4; i++)
    {
         cout << mA[i] << "\t ";
    } 

    cout << endl; 
    cout << "Matriz B: " << endl;
    for (int i = 0; i < 4; i++)
    {
         cout << mB[i] << "\t ";
    } 

    cout << endl; 
    cout << "Matriz C: " << endl;
    for (int i = 0; i < 4; i++)
    {
         cout << mC[i] << "\t ";
    } 

    cout << endl; 
    cout << "Matriz D: " << endl;
    for (int i = 0; i < 4; i++)
    {
         cout << mD[i] << "\t ";
    } 

    cout << endl; 
    cout << "Matriz E: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mE[i][j] << "\t ";
        }
        cout << endl;
    } 

return 0;}