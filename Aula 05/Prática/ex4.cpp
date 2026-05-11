#include <bits/stdc++.h>

using namespace std;

void funcaoComunica(int numClientes){
    float saldo = 0;
    while(numClientes > 0){
        cin >> saldo;
        if(saldo-12.47 < 0) cout << fixed << setprecision(2) << (saldo-12.47) << " SALDO NEGATIVO, CLIENTE DEVE SER COMUNICADO." << endl;
            else cout << fixed << setprecision(2) << (saldo-12.47) << endl;
        numClientes--;
    }
}

int main()
{   
    int numClientes = 0;
    cin >> numClientes;
    funcaoComunica(numClientes);
    return 0;
}