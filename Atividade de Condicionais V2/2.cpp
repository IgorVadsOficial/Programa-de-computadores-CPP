#include <iostream>
using namespace std;

int main () 
{
float salario;

cout << "Qual o seu salario bruto? ";
    cin >> salario;

if (salario <= 2259)
{
    cout << "Seu salario eh isento de impostos"<< endl;
}
    else 
    {
        if (salario > 2259 && salario < 3751)
        { cout << "Seu salario bruto eh: " << salario << " o imposto eh de: "<< salario * 0.705 << " e o seu salario liquido eh " << salario - (salario * 0.705) << endl;}
        else 
        {   if (salario > 3751 && salario < 4664)
                    {
                        cout << "Seu salario bruto eh: " << salario << " o imposto eh de: "<< salario * 0.15 << " e o seu salario liquido eh " << salario - (salario * 0.15) << endl;
                    } 
            else 
            {if (salario > 4664 )
                 {
                  cout << "Seu salario bruto eh: " << salario << " o imposto eh de: "<< salario * 0.2225 << " e o seu salario liquido eh " << salario - (salario * 0.2225) << endl;
                }
        }
    }
}
    return 0;}