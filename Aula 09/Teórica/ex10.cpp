#include <bits/stdc++.h>
#define TAM 3
using namespace std;

int transpoe(int m[TAM][TAM], int n[TAM][TAM], int N){
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            n[i][j] = m[j][i];
}

void imprime(int n[TAM][TAM], int N){
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cout << n[i][j] << " ";
        cout << endl;
}

int main () {
    int N;
    cin >> N;
    int m[TAM][TAM], n[TAM][TAM];
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> m[i][j];
    transpoe(m, n, N);
    imprime(n, N);
    return 0;
}