#include <iostream>
using namespace std;

int main() {
    
    int fatorial;
    
    cout << "Fatorial dos numeros impares entre 1 e 10:" << endl;
    cout << "==========================================" << endl;
    
    for(int i = 1; i <= 10; i++) {
        if(i % 2 != 0) 
        {  
            fatorial = 1;
            
            for(int j = 1; j <= i; j++) 
            {
                fatorial = fatorial * j;
            }
            
            cout << i << "! = " << fatorial << endl;
        }
    }
    
    return 0;}