#include <bits/stdc++.h>

using namespace std;

void desconto(int cod, float valor){
    if(cod>=1 && cod<=4) cout << fixed << setprecision(2) << "R$ " << valor*0.9;
    else if(cod>=5 && cod<=7) cout << fixed << setprecision(2) << "R$ " << valor*0.75;
    else if(cod>=8 && cod<=10) cout << fixed << setprecision(2) << "R$ " << valor*0.65;
    else if(cod>=11 && cod<=15) cout << fixed << setprecision(2) << "R$ " << valor*0.55;
}

int main(){
    int cod = 0;
    float valor = 0;
    cin >> cod;
    cin >> valor;
    desconto(cod, valor);
    return 0;
}