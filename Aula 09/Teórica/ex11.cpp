#include <bits/stdc++.h>
#define TAM 100
using namespace std;

void levetor(int v[TAM], int M){
    for(int i = 0; i < M; i++)
        cin >> v[i];
}

void lematriz(int m[TAM][TAM], int M){
    for(int i = 0; i < M; i++)
        for(int j = 0; j < M; j++)
            cin >> m[i][j];
}

void multiplica(int v[TAM], int m[TAM][TAM], int M) {
    int resultado[TAM] = {0};
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < M; j++) {
            resultado[i] += m[i][j] * v[j];
        }
    }
    for(int i = 0; i < M; i++) v[i] = resultado[i];
}

int main () {
    int m[TAM][TAM], M = 0, v[TAM];
    cin >> M;
    levetor(v, M);
    lematriz(m, M);
    multiplica(v, m, M);
    for(int i = 0; i < M; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}