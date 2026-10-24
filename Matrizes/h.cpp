#include <iostream>
using namespace std;

int main () {

int mA[5][5];
int mB[5][5];

cout << "Matriz A: " << endl;
for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
         cout << i+1 << "o = ";
         cin >> mA[i][j];
        } 
    }
    
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        
if (i == j){
    
    mB[i][j] = mA[i][j] * 3; }

    else {mB[i][j] = mA[i][j] * 2;}
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
return 0;}