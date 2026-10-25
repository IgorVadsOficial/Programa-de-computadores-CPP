#include <iostream>
using namespace std;

int main()
{

    double produto;

    cout << "Valor do produto: ";
    cin >> produto;

    cout << "Produto com desconto: " << produto - (produto * 0.10) << endl;

    return 0;
}