#include <iostream>
using namespace std;

int main () {
    
    int mA[5][4];
    int mB[5][4];

    cout << "Matriz A: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
         cout << i+1 << "o = ";
         cin >> mA[i][j];
        } 
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int fatorial = 1;
            for (int k = 1; k <= mA[i][j]; k++)
            {fatorial = fatorial * k;}
            mB[i][j] = fatorial;
        } 
    }
    
    cout << "Matriz A: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
         cout << mA[i][j] << "\t ";
        }
        cout << endl; 
    }

        cout << "Matriz B: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
         cout << mB[i][j] << "\t ";
        }
        cout << endl; 
    }


return 0;}