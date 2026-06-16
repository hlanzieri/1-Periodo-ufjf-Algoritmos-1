#include <bits/stdc++.h>
#define TAM 100

using namespace std;

void guardaMaior(float m[TAM][TAM], int v[TAM], int M, int N){
    for(int i = 0; i < N; i++){
        float maior = m[i][0];
        int indice = 0;
        for(int j = 1; j < M; j++){
            if(m[i][j] > maior){
                indice = j;
                maior = m[i][j];
            }
        }
        v[i] = maior;
    }
}

int main () {
    int M, N, v[TAM];
    cin >> N >> M;
    float m[TAM][TAM] = {0};
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> m[i][j];
    guardaMaior(m, v, M, N);
    for(int i = 0; i < M; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}