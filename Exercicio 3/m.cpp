#include <iostream>
using namespace std;

int main () 
{
    string nome, sexo;

    cout << "Qual o seu nome? ";
        cin >> nome;

    cout << "Qual o seu sexo? Digite M para masculino e F para feminino" << endl;
        cin >> sexo;

    if (sexo == "M")  
        {cout << nome << ". Sr." << endl;}
    else 
    {
        if (sexo == "F")
            {cout << nome << ". Sra." << endl;}
        else {cout << "Sexo informado inválido";}
    }
return 0;}