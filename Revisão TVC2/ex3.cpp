#include <bits/stdc++.h>

using namespace std;

int main () {
    int golsFeitos[10] = {0}, golsSofridos[10] = {0}, saldo[10] = {0};
    for(int i = 0; i < 10; i++){
        cin >> golsFeitos[i];
    }
    for(int i = 0; i < 10; i++){
        cin >> golsSofridos[i];
    }
    for(int i = 0; i < 10; i++){
        saldo[i] = golsFeitos[i] - golsSofridos[i];
        cout << saldo[i] << endl;
    }
    // Encontrando o pior ataque
    int minGolsFeitos = golsFeitos[0], nTimeGols = 0, maxGolsSofridos = golsSofridos[0], nTimeSofridos = 0;
    for(int i = 1; i < 10; i++){
        if(golsFeitos[i] < minGolsFeitos){
            minGolsFeitos = golsFeitos[i];
            nTimeGols = i;
        }
        if(golsSofridos[i] > maxGolsSofridos){
            maxGolsSofridos = golsSofridos[i];
            nTimeSofridos = i;
        }
    }
    cout << nTimeGols + 1 << endl << nTimeSofridos + 1;
    return 0;
}