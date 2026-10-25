#include <iostream>
using namespace std;

int main () {
    
    int n;
    float area, largura, comprimento, areatotal = 0;
    string nome, pergunta;

    cout << "Quantos quartos tem na sua casa?" << endl;
        cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Qual o nome do comodo?" << endl;
            cin >> nome;
        
        cout << "Qual a largura do comodo?" << endl;
            cin >> largura;

        cout << "Qual a comprimento do comodo?" << endl;
            cin >> comprimento;

        area = comprimento * largura;
        areatotal = areatotal + area;

        cout << "A area do " << nome << " é: " << area << endl;

        cout << "Quer calcular a area de um novo quarto? (sim/nao)" << endl;
            cin >> pergunta;

        if (pergunta == "sim" || pergunta == "Sim" )
        {continue;}
        else if (pergunta == "nao" || pergunta == "Nao") 
        {break;}
        
    }
    
    cout << "Area total da casa: " << areatotal << " m2" << endl;

    return 0;}