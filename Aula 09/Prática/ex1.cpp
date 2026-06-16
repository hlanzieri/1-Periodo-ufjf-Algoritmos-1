#include <bits/stdc++.h>
#define TAM 3

using namespace std;

void leMatriz(float x[TAM][TAM]){
    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            cin >> x[i][j];
}

void somaMatrizes(float m[TAM][TAM], float n[TAM][TAM]){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            cout << fixed << setprecision(1) << m[i][j] + n[i][j] << " ";
        }
    cout << endl;
    }
}

int main () {
    float m[TAM][TAM] = {0}, n[TAM][TAM] = {0};
    leMatriz(m);
    leMatriz(n);
    somaMatrizes(m, n);
    return 0;
}