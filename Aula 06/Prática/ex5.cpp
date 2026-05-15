#include <bits/stdc++.h>

using namespace std;

void somaD(float valorRef){
    float tempo = 0, acumulador = 0;
    cin >> tempo;
    while(tempo > 0){
         acumulador += (tempo - valorRef);
         cin >> tempo;
    }
    cout << fixed << setprecision(2) << "Soma das diferencas: " << acumulador;
}

int main(){
    float tempo = 0;
    cin >> tempo;
    somaD(tempo);
    return 0;
}