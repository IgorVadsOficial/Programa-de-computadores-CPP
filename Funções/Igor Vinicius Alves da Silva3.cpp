#include <iostream>
using namespace std;

void aplicarInflacao(int vet[], int &tamanho, double &pc)
{

    cout << "Digite o valor do percentual de reajuste: " << endl;
        cin >> pc;

    pc = 1.00 + (pc / 100);

    cout << "Digite os valores para calcular inflacao: " << endl;
    for (int i = 0; i < tamanho; i++)
    {
        cout << i + 1 << "o " << endl;
        cin >> vet[i];

        vet[i] = vet[i] * pc;

        cout << "Valor com inflacao: " << vet[i] << endl;
    }
}

void calcularMediaValida(double temp[], int &tamanho, double &media)
{
    double soma = 0.0;
    double media = 0.0;
    int cont = 0;
    bool encontrou;

    cout << "Digite as temperaturas para calcular a media: " << endl;
    for (int i = 0; i < tamanho; i++)
    {
        cin >> temp[i];
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (temp[i] >= -40)
        {
            soma = soma + temp[i];
            cont++;
        }

        media = soma / cont;
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (media >= -40)
        {
            cout << media;
            encontrou = true;
        }

        else {encontrou = false;
        cout << "Nenhuma média maior ou igual a -40 foi encontrado." << endl;}
        
    }
    
    
}

void vendaloja(double vendas[30], double &media)
{

    cout << "Digite os valores das vendas: " << endl;
    for (int i = 0; i < 30; i++)
    {
        cin >> vendas[i];

        media = vendas[i] / 30;

    }

    for (int i = 0; i < 30; i++)
    {
        if (vendas[i] > media)
        {
            cout << "Dia: " << i << endl;
        }
    }
    
}

void filtrarsinal(int ruido[10], double &media)
{
    cout << "Digite os valores dos sons para identificar os ruidos: " << endl;
    for (int i = 1; i < 10; i++)
    {
        cin >> ruido[i];

        if (ruido[i] > ruido[i - 1] * 2 && ruido[i] > ruido[i + 1] * 2)
        {
            media = (ruido[i - 1] + ruido[i + 1]) / 2;

            ruido[i] = media;
        }

        // O indice zero eu evitei comecando a partir do indice 1 na estrutura de repeticao for, o ultimo elemento eu nao consegui pensar em uma forma de resolver. //
    }
}

void removerDuplicatasConsecutivas(double rotas[7])
{
    int cont = 0;

    cout << "Digite os valores das rotas para remover as duplicatas: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cin >> rotas[i];

        if (rotas[i] == rotas[i + 1])
        {
            cont++;
        }

        cout << i + 1 << "o da rota nova = " << rotas[i] << endl;
    }
}

int main()
{
    int qst;

    cout << "Escolha o numero da questao (1 a 5): " << endl;
    cin >> qst;

    if (qst == 1)
    {
        int tamanho;
        int vet[tamanho];
        double pc;

        cout << "Digite a quantidade de valores: ";
            cin >> tamanho;

        aplicarInflacao(vet, tamanho, pc);
    }

    else if (qst == 2)
    {
        int tamanho;
        double temp[tamanho];
        double media;
        calcularMediaValida(temp, tamanho, media);
    }

    else if (qst == 3)
    {
        double vendas[30];
        double media;
        vendaloja(vendas, media);
    }

    else if (qst == 4)
    {
        int ruido[10] = {0};
        double media;
        filtrarsinal(ruido, media);
    }

    else if (qst == 5)
    {
        double rotas[7];
        removerDuplicatasConsecutivas(rotas);
    }

    return 0;
}