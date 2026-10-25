#include <iostream>
using namespace std;

int main () {

int mA[12];
int mB[12];
int mC[12][2];

cout << "Matriz A: " << endl;
for (int i = 0; i < 12; i++)
{
    cout << i+1 << "o = ";
    cin >> mA[i];
}

cout << "Matriz B: " << endl;
for (int i = 0; i < 12; i++)
{
    cout << i+1 << "o = ";
    cin >> mB[i];
}

for (int i = 0; i < 12; i++)
{
    mC[i][0] = mA[i] * 2;
    mC[i][1] = mB[i] - 5;
}

cout << endl;
cout << "Matriz A: " << endl;
for (int i = 0; i < 12; i++)
{
    cout << mA[i] << "\t ";
}

cout << endl;
cout << endl;
cout << "Matriz B: " << endl;
for (int i = 0; i < 12; i++)
{
    cout << mB[i] << "\t ";
}

cout << endl;
cout << endl;
cout << "Matriz C: " << endl;
for (int i = 0; i < 12; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cout << mC[i][j] << "\t ";
    }
    cout << endl;
}

return 0;}