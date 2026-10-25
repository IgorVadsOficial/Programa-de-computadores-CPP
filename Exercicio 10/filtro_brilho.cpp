#include <iostream>
using namespace std;

const int LINHAS = 3;
const int COLUNAS = 4;
const int MAX_BRILHO = 255;

void aplicarFiltro(int imagem[LINHAS][COLUNAS], int fator) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            imagem[i][j] = imagem[i][j] * fator;
        }
    }
}

void corrigirExcesso(int imagem[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (imagem[i][j] > MAX_BRILHO) {
                imagem[i][j] = MAX_BRILHO;
            }
        }
    }
}

void exibirImagem(int imagem[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << imagem[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int imagem[LINHAS][COLUNAS];
    int fator;

    cout << "Digite os valores da imagem (3x4):" << endl;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cin >> imagem[i][j];
        }
    }

    cout << "Digite o fator de aumento do brilho: ";
    cin >> fator;

    aplicarFiltro(imagem, fator);
    corrigirExcesso(imagem);

    cout << "\nImagem apos aplicar o filtro:" << endl;
    exibirImagem(imagem);

    return 0;
}
