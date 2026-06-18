#include <bits/stdc++.h>

using namespace std;

struct Medidas{
    float peso;
    float altura;
};

int main () {
    Medidas pessoas[6];
    float somaPesos = 0, somaAlturas = 0;
    for(int i = 0; i < 6; i++){
        cin >> pessoas[i].peso;
        somaPesos += pessoas[i].peso;
        cin >> pessoas[i].altura;
        somaAlturas += pessoas[i].altura;
    }
    cout << endl << "A media das alturas do conjunto de pessoas eh: " << setprecision(2) << somaAlturas/6 << endl;
    cout << "A media dos pesos do conjunto de pessoas eh: " << setprecision(2) << somaPesos/6 << endl;
    return 0;
}