#include <bits/stdc++.h>

using namespace std;

void calculaDiagonal(int m[100][100], int N){
    int somaDP = 0, somaDS = 0;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(i == j) somaDP += m[i][j];
    for(int i = 0; i < N; i++)
        for(int j = N - 1; j > 0; j++)
            if((i + j) == (N - 1)) somaDS += m[i][j];
    cout << endl << "Soma da diagonal Principal: " << somaDP << endl;
    cout << "Soma da diagonal Secundaria: " << somaDS << endl;
}

int main () {
    int N = 0;
    while(cin >> N && N > 0 && N <= 100);
    int m[N][N] = {0};
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> m[i][j];
    calculaDiagonal(m, N);
    return 0;
}