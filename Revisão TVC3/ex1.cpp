#include <bits/stdc++.h>
#define M 40

using namespace std;

void recursosDestinados(int medals[M][3], int nModalidades){
    float valor[nModalidades] = {0}, maiorValor = 0;
    for(int i = 0; i < nModalidades; i++){
        if(medals[i][0] == 0) valor[i] += 100000;
        for(int j = 0; j < 3; j++){
            valor[i] += 30000*medals[i][j];
        }
    }
    maiorValor = valor[0];
    for(int i = 1; i < nModalidades; i++){
        if(valor[i] > maiorValor) maiorValor = valor[i];
    }
    cout << "Maior investimento a ser pago: R$" << fixed << setprecision(2) << maiorValor << endl;
    for(int i = 0; i < nModalidades; i++){
        if(valor[i] == maiorValor){
            cout << "Modalidade: " << i << endl;
        }
    }
}

int main () {
    int medals[M][3] = {}, nModalidades;
    cin >> nModalidades;
    for(int i = 0; i < nModalidades; i++){
        for(int j = 0; j < 3; j++){
            cin >> medals[i][j];
        }
    }
    recursosDestinados(medals, nModalidades);
    return 0;
}