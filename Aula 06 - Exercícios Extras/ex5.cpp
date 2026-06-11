#include <bits/stdc++.h>
#define TAM 10
using namespace std;

int main () {
    int X[TAM] = {0};
    for(int i = 0; i < TAM; i++){
        cin >> X[i];
        if(X[i] <= 0) X[i] = 1;
    }
    for(int i = 0; i < TAM; i++){
        cout << "X["<< i << "] = " << X[i] << endl;
    }
    return 0;
}