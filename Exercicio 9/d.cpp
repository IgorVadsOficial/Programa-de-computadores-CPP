#include <iostream>
using namespace std;

int main () {
    
    int mA[10];
    int mC[10][3];

    cout << "Matriz A: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i+1 << "o = ";
        cin >> mA[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
            mC[i][0] = mA[i] + 5;

            int fatorial = 1;
            
            for (int k = 1; k <= mA[i]; k++) 
            {fatorial = fatorial * k;}

            mC[i][1] = fatorial;

            mC[i][2] =  mA[i] * mA[i]; 
    }

    cout << "Matriz C: " << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             cout << mC[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;}