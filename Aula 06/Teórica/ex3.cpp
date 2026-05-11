#include <bits/stdc++.h>

using namespace std;

int retornaMaior(int n){
    int maior = 0;
    cin >> maior;
    for(int i = 0; i < n-1; i++){
        int aux = 0;
        cin >> aux;
        if(aux > maior) maior = aux;
    }
    return maior;
}

int main () {
    int n = 0;
    cin >> n;
    cout << endl << "O maior numero dos valores lidos eh: " << retornaMaior(n) << endl;
    return 0;
}