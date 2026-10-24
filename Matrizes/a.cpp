#include <iostream>
using namespace std;

int main () {

int mA [5][3];
int mB [5][3];
int mC [5][3];


for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << "Matriz A: ";
        cin >> mA[i][j];
    }
    
}

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << "Matriz B: ";
        cin >> mB[i][j];
    }
    
}

cout << "Soma da Matriz A + B:" << endl;

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 3; j++)
    {
        mC[i][j] = mA[i][j] + mB[i][j];

    }
}

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << mC[i][j] << "\t";

    }
}
return 0;}