#include <iostream>
using namespace std;

int main () {

    int resultado = 1;

    for (int i = 0; i <= 15; i++)
    {
            cout << " 3^" << i << " = " << resultado << endl;
            resultado = resultado * 3;
    }
    
    return 0;}