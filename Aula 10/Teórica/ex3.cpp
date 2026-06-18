#include <bits/stdc++.h>

using namespace std;

struct Medidas{
    float peso;
    float altura; // em metros
};

int main () {
    Medidas joao, maria;
    joao.altura = 1.78;
    maria.altura = 1.64;
    joao.peso = 75;
    maria.peso = 59;
    cout << "Media das alturas: " << fixed << setprecision(2) << (maria.altura+joao.altura)/2 << endl;
    cout << "Media dos pesos: " << (maria.peso + joao.peso)/2 << endl;
    return 0;
}