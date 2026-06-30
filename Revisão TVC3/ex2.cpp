#include <bits/stdc++.h>
#define MAX 100

using namespace std;

void inverteHorizontalmente(int A[MAX][MAX], int B[MAX][MAX], int k){
    for(int i = 0; i < k; i++){
        int aux = 0;
        for(int j = (k - 1); j >= 0; j--){
            B[i][aux] = A[i][j];
            aux++;
        }
    }
}

int main () {
    int A[MAX][MAX] = {0}, B[MAX][MAX] = {0}, k;
    cin >> k;
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            cin >> A[i][j];
        }
    }
    inverteHorizontalmente(A, B, k);
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}