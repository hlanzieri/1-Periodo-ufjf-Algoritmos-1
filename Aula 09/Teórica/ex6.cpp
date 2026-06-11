#include <bits/stdc++.h>

using namespace std;

int indice(int m[100][100], int linhas, int colunas){
    int somaLinhas[linhas] = {0};
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            somaLinhas[i] += m[i][j];
    int maior = somaLinhas[0], indiceMaior = 0;
    for(int i = 1; i < linhas; i++)
        if(somaLinhas[i] > maior){
            maior = somaLinhas[i];
            indiceMaior = i;
        }
    return indiceMaior;
}

int main () {
    int m[100][100], linhas, colunas;
    cin >> linhas >> colunas;
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            cin >> m[i][j];
    cout << endl << "O indice da linha com maior soma eh: " << indice(m, linhas, colunas) << endl;
    return 0;
}