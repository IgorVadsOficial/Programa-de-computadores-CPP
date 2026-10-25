#include <iostream>
using namespace std;

int main () {

int mA[5][6];
int mB[5][6];
int mC[5][6];

cout << "Matriz A" << endl;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 6; j++)
    {
            int valor;
            cout << "Digite um valor par para A[" << i << "][" << j << "]: ";
            cin >> valor;
            
            while (valor % 2 != 0) {
                cout << "Valor invalido! Digite um numero par: ";
                cin >> valor;}
            mA[i][j] = valor;
    }
}

cout << "Matriz B" << endl;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 6; j++)
    {
            int valor;
            cout << "Digite um valor impar para B[" << i << "][" << j << "]: ";
            cin >> valor;
            
            while (valor % 2 == 0) {
                cout << "Valor invalido! Digite um numero impar: ";
                cin >> valor;}
            mB[i][j] = valor;
    }
}

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 6; j++)
    {
        mC[i][j] = mA[i][j] + mB[i][j];
    }
}

    cout << endl; 
    cout << "Matriz A: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
         cout << mA[i][j] << "\t ";
        }
        cout << endl; 
    }

    cout << endl; 
    cout << "Matriz B: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
         cout << mB[i][j] << "\t ";
        }
        cout << endl; 
    }

    cout << endl; 
    cout << "Matriz C (Soma): " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
         cout << mC[i][j] << "\t ";
        }
        cout << endl; 
    }



return 0;}