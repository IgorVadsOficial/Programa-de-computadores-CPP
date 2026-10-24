#include <iostream>
using namespace std;

int main () 
{
    
float idade, peso;

cout << "Digite a sua idade: ";
    cin >> idade;
cout << "Digite o seu peso: ";
    cin >> peso;

if (idade >=12 && idade <=17) 
{cout << "Voce eh da categoria Juvenil!" << endl;}
    else 
    {if (idade >= 18 && peso <75) 
    {cout << "Voce eh da categoria Adulto Leve!" << endl;}
        else 
        {if (idade >=18 && peso >75)
            {cout << "Voce eh da categoria Adulto Pesado!" << endl;}
            else
                {if (idade < 12) {cout << "Menores de 12 anos não são permitidos!" << endl;}
                }   
        }
    }
    return 0;} 

