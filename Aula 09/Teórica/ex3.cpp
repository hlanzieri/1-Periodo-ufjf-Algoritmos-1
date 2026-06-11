#include <bits/stdc++.h>

using namespace std;

int main () {
    int N, M;
    cin >> N >> M;
    int m[N][M] = {0};
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> m[i][j];
        }
    }
    cout << endl;
    for(int i = 0; i < N; i++){
        float somaLinha = 0;
        for(int j = 0; j < M; j++){
            somaLinha+= m[i][j];
        }
        cout << "Soma da linha [" << i << "] = " << somaLinha << endl;
    }
    cout << endl;
    for(int i = 0; i < N; i++){
        float somaColuna = 0;
        for(int j = 0; j < M; j++){
            somaColuna+= m[i][j];
        }
        cout << "Media da coluna [" << i << "] = " << somaColuna/M << endl;
    }
    return 0;
}