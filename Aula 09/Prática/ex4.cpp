#include <bits/stdc++.h>

using namespace std;

void normalizaMatriz(float X[100][100], float Xnorm[100][100], int linhas, int colunas){
    float Xmin[100] = {0}, Xmax[100] = {0};
    for(int i = 0; i < colunas; i++){
        float max = X[0][i], min = X[0][i];
        for(int j = 1; j < linhas; j++){
           if(X[j][i] > max) max = X[j][i]; 
           if(X[j][i] < min) min = X[j][i];
        }
        Xmin[i] = 0.9*min;
        Xmax[i] = 1.1*max;
    }
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            Xnorm[i][j] = (X[i][j]-Xmin[j])/(Xmax[j] - Xmin[j]);

}

int main () {
    int linhas, colunas;
    cin >> linhas >> colunas;
    float X[100][100] = {0}, Xnorm[100][100] = {0};
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cin >> X[i][j];
        }
    }
    normalizaMatriz(X, Xnorm, linhas, colunas);
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << fixed << setprecision(3) << Xnorm[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}