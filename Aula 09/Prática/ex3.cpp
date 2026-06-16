#include <bits/stdc++.h>
#define TAM 3

using namespace std;

void leMatriz(int X[TAM][TAM]){
    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            cin >> X[i][j];
}

int multlc(int A[TAM][TAM], int B[TAM][TAM], int i, int j){
    int r = 0;
    for(int k = 0; k < TAM; k++){
        r += A[i][k]*B[k][j];
    }
    return r;
}

void multiplicacao(int A[TAM][TAM], int B[TAM][TAM], int R[TAM][TAM]){
    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            R[i][j] = multlc(A, B, i, j);
}
int main () {
    int A[TAM][TAM] = {0}, B[TAM][TAM] = {0}, R[TAM][TAM] = {0};
    leMatriz(A);
    leMatriz(B);
    multiplicacao(A, B, R);
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            cout << R[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}