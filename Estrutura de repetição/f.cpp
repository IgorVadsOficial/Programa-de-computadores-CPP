#include <iostream>
using namespace std;

int main () {
    

    cout << "todos os valores numéricos divisíveis por 4 e menores que 200: " << endl;

    for (int i = 0; i < 200; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << endl;
        }
        
    }
    
    
    
    
    
    
    return 0;}