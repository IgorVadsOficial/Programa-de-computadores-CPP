#include <iostream>
using namespace std;

void aplicarInflacao(double vet[], int tamanho, double percentual)
{
    double fator = 1.0 + (percentual / 100.0);
    
    for (int i = 0; i < tamanho; i++)
    {
        vet[i] = vet[i] * fator;
    }
}

double calcularMediaValida(int temperaturas[], int tamanho)
{
    double soma = 0.0;
    int contador = 0;
    
    for (int i = 0; i < tamanho; i++)
    {
        if (temperaturas[i] >= -40)
        {
            soma += temperaturas[i];
            contador++;
        }
    }
    
    if (contador == 0)
    {
        return 0.0;
    }
    
    return soma / contador;
}

void analisarVendas(double vendas[], int tamanho)
{
    double soma = 0.0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += vendas[i];
    }
    double media = soma / tamanho;
    
    cout << "Media mensal: " << media << endl;
    cout << "Dias com venda acima da media: " << endl;
    
    for (int i = 0; i < tamanho; i++)
    {
        if (vendas[i] > media)
        {
            cout << "Dia " << i + 1 << ": " << vendas[i] << endl;
        }
    }
}

void filtrarSinal(int sinal[], int tamanho)
{
    for (int i = 1; i < tamanho - 1; i++)
    {
        if (sinal[i] > (2 * sinal[i-1]) && sinal[i] > (2 * sinal[i+1]))
        {
            int media = (sinal[i-1] + sinal[i+1]) / 2;
            sinal[i] = media;
        }
    }
}

int removerDuplicatasConsecutivas(double rotas[], int tamanho)
{
    if (tamanho == 0) return 0;
    
    int novoIndice = 1;
    
    for (int i = 1; i < tamanho; i++)
    {
        if (rotas[i] != rotas[novoIndice - 1])
        {
            rotas[novoIndice] = rotas[i];
            novoIndice++;
        }
    }
    
    return novoIndice;
}

int main()
{
    int opcao;
    
    cout << "Escolha a questao (1 a 5): ";
    cin >> opcao;
    
    if (opcao == 1)
    {
        int n;
        double percentual;
        
        cout << "Digite o numero de produtos: ";
        cin >> n;
        
        double precos[n];
        
        cout << "Digite os preços dos produtos: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Produto " << i + 1 << ": ";
            cin >> precos[i];
        }
        
        cout << "Digite o percentual de inflacao: ";
        cin >> percentual;
        
        cout << "Precos originais: ";
        for (int i = 0; i < n; i++)
        {
            cout << "R$" << precos[i] << " ";
        }
        cout << endl;
        
        aplicarInflacao(precos, n, percentual);
        
        cout << "Precos com inflacao: ";
        for (int i = 0; i < n; i++)
        {
            cout << "R$" << precos[i] << " ";
        }
        cout << endl;
    }
    else if (opcao == 2)
    {
        int n;
        
        cout << "Digite o numero de temperaturas: ";
        cin >> n;
        
        int temperaturas[n];
        
        cout << "Digite as temperaturas: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Temperatura " << i + 1 << ": ";
            cin >> temperaturas[i];
        }
        
        double media = calcularMediaValida(temperaturas, n);
        
        cout << "Media das temperaturas validas (>= -40): " << media << endl;
    }
    else if (opcao == 3)
    {
        int n;
        
        cout << "Digite o numero de dias: ";
        cin >> n;
        
        double vendas[n];
        
        cout << "Digite os valores das vendas: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Dia " << i + 1 << ": ";
            cin >> vendas[i];
        }
        
        analisarVendas(vendas, n);
    }
    else if (opcao == 4)
    {
        int n;
        
        cout << "Digite o numero de amostras do sinal: ";
        cin >> n;
        
        int sinal[n];
        
        cout << "Digite os valores do sinal: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Amostra " << i + 1 << ": ";
            cin >> sinal[i];
        }
        
        cout << "Sinal original: ";
        for (int i = 0; i < n; i++)
        {
            cout << sinal[i] << " ";
        }
        cout << endl;
        
        filtrarSinal(sinal, n);
        
        cout << "Sinal apos filtragem: ";
        for (int i = 0; i < n; i++)
        {
            cout << sinal[i] << " ";
        }
        cout << endl;
    }
    else if (opcao == 5)
    {
        int n;
        
        cout << "Digite o numero de rotas: ";
        cin >> n;
        
        double rotas[n];
        
        cout << "Digite os valores das rotas: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Rota " << i + 1 << ": ";
            cin >> rotas[i];
        }
        
        cout << "Vetor original: ";
        for (int i = 0; i < n; i++)
        {
            cout << rotas[i] << " ";
        }
        cout << endl;
        
        int novoTamanho = removerDuplicatasConsecutivas(rotas, n);
        
        cout << "Vetor sem duplicatas consecutivas: ";
        for (int i = 0; i < novoTamanho; i++)
        {
            cout << rotas[i] << " ";
        }
        cout << endl;
        cout << "Novo tamanho util: " << novoTamanho << endl;
    }
    else
    {
        cout << "Opcao invalida!" << endl;
    }
    
    return 0;
}