#include <iostream>
using namespace std;

int main () {

float peso, altura, imc;

cout << "Qual eh o seu peso(kg)?" << endl;
    cin >> peso;

cout << "Qual eh a sua altura(metros)? " << endl;
    cin >> altura;

imc = peso / (altura * altura);

cout << "Seu IMC é: " << imc << endl;

if (imc < 18.5)
{cout << "Voce esta abaixo do peso"<< endl;}
else if (imc >= 18.5 && imc < 25)
{cout << "Voce esta no peso normal" << endl;}
else if (imc >= 25 && imc < 30)
{cout << "Voce esta no sobrepeso" << endl;}
else {cout << "Voce esta na obesidade" << endl;}

return 0;}