#include <iostream>
using namespace std;

int main () 
{
    float x,y;
    
    cout << "Escreva as coordenadas X: " << endl;
        cin >> x;
    cout << "Escreva as coodernadas Y: " << endl;
        cin >> y;
    
        if (x > 0 && y > 0) 
        {cout << "Isso eh do 1 Quadrante" << endl;}
        else if (x < 0 && y > 0 ) 
        {cout << "Isso e do 2 Quadrante" << endl;}
        else if (x < 0 && y < 0)
        {cout << "Isso eh do 3 Quadrante" << endl;}
        else if (x > 0 && y < 0) 
        {cout << "Isso eh do 4 Quadrante" << endl;}
        else if (x == 0 || y == 0)
        {cout << "Isso eh Sobre o Eixo" << endl;}
        
    return 0;}