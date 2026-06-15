#include <bits/stdc++.h>
#define TAM 3

using namespace std;

void lematriz(int x[TAM][TAM]){
    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            cin >> x[i][j];
}

void somaMatrizes(int m[TAM][TAM], int n[TAM][TAM]){
    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++){
            cout << m[i][j] + n[i][j] << " ";
        }
        cout << endl;
}

int main () {
    int m[TAM][TAM], n[TAM][TAM];
    lematriz(m);
    lematriz(n);
    somaMatrizes(m, n);
    return 0;
}