#include <bits/stdc++.h>

using namespace std;

int maior(int v[], int tam){
    int maiorN = 0;
    maiorN = v[0];
    for(int i = 1; i < tam; i++){
        if(v[i] > maiorN) maiorN = v[i];
    }
    return maiorN;
}

int main(){
    int v[99] = {0}, tam = 0;
    cin >> tam;
    for(int i = 0; i < tam; i++){
        cin >> v[i];
    }
    cout << maior(v, tam) << endl;
    return 0;
}