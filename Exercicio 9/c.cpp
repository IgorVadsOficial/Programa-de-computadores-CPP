#include <iostream>
using namespace std;

int main () {

int matriz [4][5];

for (int i = 0; i < 4; i++)
{

    for (int j = 0; j < 5; j++)
    {
        cout << "Matriz: ";
        cin >> matriz[i][j];
    }
}

for (int i = 0; i < 4; i++)
{

    for (int j = 0; j < 5; j++)
    {
        cout << matriz[i][j] << "\t";
    }
    cout << endl;
}

return 0;}