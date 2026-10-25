#include <iostream>
using namespace std;

void lerNotas(double &n1, double &n2, double &n3){
    
    cout << "Digite primeira nota: " << endl;
        cin >> n1;

    cout << "Digite segunda nota: " << endl;
        cin >> n2;

    cout << "Digite terceira nota: " << endl;
        cin >> n3;

}

double calcularMedia(double n1, double n2, double n3) {

    double media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    cout << "A media ponderada foi de : " << media << endl;
    return media;
}

void mostrarResultado(double media){

    if (media >= 9.5)
    {
        cout << "Aprovado" << endl;
    }

    else {cout << "Reprovado" << endl;}

}

int main() {

double n1, n2, n3;
double media;

lerNotas(n1,n2,n3);

media = calcularMedia(n1,n2,n3);

mostrarResultado(media);


return 0;}