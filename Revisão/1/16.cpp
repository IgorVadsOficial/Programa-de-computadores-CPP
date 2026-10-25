#include <iostream>
using namespace std;

int main() {

double valor_hora;
int hora_trabalhada;

cout << "Digite o valor da sua hora: ";
cin >> valor_hora;

cout << "Digite a quantidade de horas trabalhadas: ";
cin >> hora_trabalhada;

cout << "Salario bruto = " << valor_hora * hora_trabalhada << endl;

return 0;}