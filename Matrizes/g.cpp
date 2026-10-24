#include <iostream>
using namespace std;

int main () {
    
    int mA[4][5];
    int mB[4][5];

    cout << "Digite os valores em Celcius: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        cout << i+1 << "o = ";
        cin >> mA[i][j];

        mB[i][j] = (mA[i][j] * 1.8) + 32;
        }
    }
    
    
    cout << "Celcius: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         cout << mA[i][j] << "\t ";
        }
        cout << endl; 
    }

        cout << "Fahrenheit: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         cout << mB[i][j] << "\t ";
        }
        cout << endl; 
    }
    
    return 0;}