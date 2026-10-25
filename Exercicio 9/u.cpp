#include <iostream>
using namespace std;

int main () {

int mA[4][5];
int mB[4][5];
int mC[4][5];


cout << "Matriz A" << endl;
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 5; j++)
    {
            int valor;
            cout << "Digite um numero divisivel por 3 ou 4[" << i << "][" << j << "]: ";
            cin >> valor;
            
            while (!(valor % 3 == 0 || valor % 4 == 0)) {
                cout << "Valor invalido! Digite um numero divisivel por 3 ou 4: ";
                cin >> valor;}
            mA[i][j] = valor;
    }
}

cout << "Matriz B" << endl;
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 5; j++)
    {
            int valor;
            cout << "Digite um numero divisivel por 5 e 6[" << i << "][" << j << "]: ";
            cin >> valor;
            
            while (!(valor % 5 == 0 && valor % 6 == 0)) {
                cout << "Valor invalido! Digite um numero divisivel por 5 e 6: ";
                cin >> valor;}
            mB[i][j] = valor;
    }
}

for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 5; j++)
    {
        mC[i][j] = mA[i][j] * mB[i][j];
    }
}

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
        for (int j = 0; j < 5; j++)
        {
         cout << mB[i][j] << "\t ";
        }
        cout << endl; 
    }

    cout << endl; 
    cout << "Matriz C (Multiplicao): " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         cout << mC[i][j] << "\t ";
        }
        cout << endl; 
    }

return 0;}