#include <iostream>
using namespace std;

int main () {
    
    int a= 0, b=1, proximo;

    for (int i = 0; i < 10; i++)
    {
        cout << a << " " << endl;
        proximo = a + b;
        a = b;
        b = proximo;
    }
    
    return 0;}