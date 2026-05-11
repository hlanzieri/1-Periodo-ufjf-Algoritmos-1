#include <bits/stdc++.h>

using namespace std;

void calcula(int qtdLim, int qtdPR){
    if(qtdPR > qtdLim) cout << "Valor da entrega: R$ " << 45*qtdLim << ".00 (" << qtdLim << " Caixas - Pedido reduzido)";
        else cout << "Valor da entrega: R$ " << 45*qtdPR << ".00 (" << qtdPR << " Caixas)";
    cout << endl;
}

int main(){
    int qtdPR = 0, qtdLim = 0;
    cin >> qtdLim >> qtdPR;
    while(qtdPR != -1){
        calcula(qtdLim, qtdPR);
        cin >> qtdPR;
    }
    return 0;
}