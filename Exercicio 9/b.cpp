#include <iostream>
using namespace std;

int main () {

int mA [7];
int mB [7];
int mC [7][2];


for (int i = 0; i < 7; i++)
{
        cout << i+1 << "o = ";
        cin >> mA[i];
}

for (int i = 0; i < 7; i++)
{
        cout << i+1 << "o = ";
        cin >> mB[i];
}


for (int i = 0; i < 7; i++)
{
       mC[i][0] = mA[i];
       mC[i][1] = mB[i];
}

for (int i = 0; i < 7; i++)
{
cout << mC[i][0] << "\t" << mC[i][1] << endl;
}

return 0;}