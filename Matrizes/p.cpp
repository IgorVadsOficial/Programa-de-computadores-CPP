#include <iostream>
using namespace std;

int main () {

int mA [10][7];
int cont_par = 0;
int cont_imp = 0;
int cont_total = 0;

cout << "Matriz A: " << endl;
for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 7; j++)
        {
         cout << i+1 << "o = ";
         cin >> mA[i][j];
        } 
    }

for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cont_total++;
         if (mA[i][j] % 2 == 0)
         {
           cont_par++;
         }
         else {cont_imp++;}
         
        } 
    }

    cout << "Total de numeros na Matriz: " << cont_total << endl;
    cout << "Total de numeros pares na Matriz: " << cont_par << endl;
    cout << "Total de numeros impares na Matriz: " << cont_imp << endl;
    cout << endl;
    cout << "Porcentagem de pares: " << (cont_par * 100.0 / cont_total) << "% " << endl;
    cout << "Porcentagem de impares: " << (cont_imp * 100.0 / cont_total) << "% " << endl;
return 0;}