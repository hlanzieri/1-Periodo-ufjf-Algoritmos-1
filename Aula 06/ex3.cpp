#include <bits/stdc++.h>

using namespace std;

float calculaCompra(){
    int qtd = 0;
    float valor = 0, total = 0;
    cin >> qtd >> valor;
    while(qtd > 0){
        total += qtd*valor;
        cin >> qtd >> valor;
    }
    return total;
}

int main(){
    cout << "Total: R$" << fixed << setprecision(2) << calculaCompra() << "." << endl;
    return 0;
}