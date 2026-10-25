#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {  

    string SENHA_ATUAL = "1234";
    string SENHA;
    string numeros = "0123456789";
    string especiais = "!@#$%^&*()-_+=[]{};:,.<>/?|";
    int CONT_ACESS = 0;
    bool temNumero = false;
    bool temEspecial = false;

    while (true) 
    {   
        cout << "FACA LOGIN COM A SENHA: " << endl;
        cin >> SENHA;

        if (SENHA == SENHA_ATUAL) 
        {   
            cout << "ABRIR PORTA" << endl;
            CONT_ACESS = 0;
            break;
        }

        else if (SENHA == "admin123") 
        {   
            cout << "DIGITE UMA NOVA SENHA: " << endl;
            cin >> SENHA_ATUAL;
            CONT_ACESS = 0;

            temNumero = false;
            temEspecial = false;

            for (int i = 0; i < SENHA_ATUAL.length(); i++) 
            {
                string caractereAtual = SENHA_ATUAL.substr(i, 1);

                if (numeros.find(caractereAtual) != string::npos) 
                    temNumero = true;

                if (especiais.find(caractereAtual) != string::npos) 
                    temEspecial = true;
            }
        }

        if (temEspecial && temNumero)
        {
            cout << "FACA LOGIN COM A SENHA: " << endl;
            cin >> SENHA_ATUAL;
            cout << "ABRIR PORTA" << endl;
            CONT_ACESS = 0;
            break;
        }
        else 
        {   
            CONT_ACESS++;
            cout << "SENHA INVALIDA" << endl;
            cout << "DIGITE UMA NOVA SENHA:" << endl;
            cin >> SENHA_ATUAL;
            cout << "TENTATIVAS DE ACESSO: " << CONT_ACESS << endl;

            if (CONT_ACESS >= 3) 
            {   
                cout << "SENHA BLOQUEADA" << endl;
                break;
            }
        }
    }
    return 0;}