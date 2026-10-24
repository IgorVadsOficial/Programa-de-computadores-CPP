#include <iostream>
using namespace std;
#include <cmath>

int main () {

double m[50];
double M = 50;
double soma = 0;
double o;
double soma_dif = 0; 

cout << "Controle de Qualidade Estatistico " << endl;
for (int i = 0; i < 50; i++)
    {  
        cout << i + 1 << "o = ";
        cin >> m[i];
        soma = soma + m[i];
    }

    double u = soma / M;

   for (int i = 0; i < 50; i++)
   {
    soma_dif = soma_dif + pow(m[i] - u,2);
   }

   o = sqrt(soma_dif / (M - 1));

   double lsc = u + (2 * o);
   double lic = u - (2 * o);

   bool alertas[50];
   int defeitos = 0;

   for (int i = 0; i < 50; i++)
   {
    if (m[i] > lsc || m[i] < lic)
    {
        alertas[i] = true;
        defeitos++;
    }

    else{alertas[i] = false;}
   }
   
  double porcentagem = (defeitos * 100.0) / 50;
   
cout << "Total de peças defeituosas (alertas): " << defeitos << endl;
cout << endl;
cout << "Porcentagem de rejeição da linha de produção " << porcentagem << "% " << endl;

return 0;}