#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Digite N: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " eh par.";
    }
    else {cout << n << " eh impar.";}
    

    return 0;
}