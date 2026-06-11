#include <bits/stdc++.h>
#define TAM 20

using namespace std;

int main () {
    int v[TAM] = {0}, menor = 0, indice = 0;
    for(int i = 0; i < TAM; i++){
        cin >> v[i];
        if(i == 0){
            menor = v[i];
            indice = i;
        }
        if(v[i] < menor){
            menor = v[i];
            indice = i;
        }
    }
    cout << "Menor: " << menor << endl << "Índice: " << indice << endl;
    return 0;
}