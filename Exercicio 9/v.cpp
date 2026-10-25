#include <iostream>
using namespace std;

int main () {

int mA[5][5];
int mB[5][5];
int mC[5][5];

cout << "Matriz A" << endl;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        int valor;
        cout << "Digite um valor que nao seja divivel por 3" << endl;
        cin >> valor;

        while (valor % 3 == 0)
        {
            cout << "Valor invalido, esse numero é divisivel por 3" << endl;
            cin >> valor;
        }
        mA[i][j] = valor;
    }
    
}

cout << "Matriz B" << endl;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        int valor;
        cout << "Digite um valor que nao seja divivel por 6" << endl;
        cin >> valor;

        while (valor % 6 == 0)
        {
            cout << "Valor invalido, esse numero é divisivel por 6" << endl;
            cin >> valor;
        }
        mB[i][j] = valor;
    }
    
}

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        mC[i][j] = mA[i][j] + mB[i][j];
    }
    
}


    cout << endl; 
    cout << "Matriz A: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         cout << mA[i][j] << "\t ";
        }
        cout << endl; 
    }

    cout << endl; 
    cout << "Matriz B: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         cout << mB[i][j] << "\t ";
        }
        cout << endl; 
    }

    cout << endl; 
    cout << "Matriz C (Soma): " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         cout << mC[i][j] << "\t ";
        }
        cout << endl; 
    }

return 0;}