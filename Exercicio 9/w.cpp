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
         cout << "A[" << i+1 << "][" << j+1 << "] = ";
         cin >> mA[i][j];
        } 
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

      if (i + j == 4)
      {
        mB[i][j] = mA[i][j] * 3;
      }
      else {mB[i][j] = mA[i][j] * 2;}
            
        }
        
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