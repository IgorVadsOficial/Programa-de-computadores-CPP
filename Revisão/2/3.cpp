#include <iostream>
using namespace std;

int main()
{

    double n1, n2, n3, n4;

    cout << "NOTA 1: " << endl;
    cin >> n1;

    cout << "NOTA 2: " << endl;
    cin >> n2;

    cout << "NOTA 3: " << endl;
    cin >> n3;
    
    cout << "NOTA 4: " << endl;
    cin >> n4;

    cout << "Media = " << (n1 + n2 + n3 + n4) / 4 << endl;

    return 0;
}