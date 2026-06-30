#include <bits/stdc++.h>

using namespace std;

int main () {
    int tam = 0;
    cin >> tam;
    int placebo[tam] = {0}, vacinados[tam] = {0}, resultados[tam] = {0};
    for(int i = 0; i < tam; i++){
        cin >> placebo[i] >> vacinados[i];
    }
    float infectadosVacinados = 0, infectadosPlacebo = 0, nInfectadosPlacebos = 0;
    int j = 0;
    for(int i = 0; i < tam; i++){
        if(vacinados[i] >= 1 && vacinados[i] <= 5) infectadosVacinados++;
        if(placebo[i] >= 1 && vacinados[i] <= 5) infectadosPlacebo++;
            else{
                nInfectadosPlacebos++;
                resultados[j] = i;
                j++;
            }
    }
    float eficacia = 1 - (infectadosVacinados/ infectadosPlacebo);
    cout << "Eficacia global " << fixed << setprecision(2) << eficacia << endl;
    cout << "Não infectados do grupo placebo: " << fixed << setprecision(0) << nInfectadosPlacebos;
    return 0;
}