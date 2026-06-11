#include <bits/stdc++.h>
#define TAM 200
using namespace std;

int main () {
    int voto[TAM] = {0}, i = 0, candidatos[6] = {0};
    while(cin >> voto[i] && voto[i] != -1) i++;
    cout << "Total de votos: " << i << " voto(s)" << endl;
    for(int j = 0; j < i ; j++){
        if(voto[j] == 1) candidatos[1]++;
        if(voto[j] == 2) candidatos[2]++;
        if(voto[j] == 3) candidatos[3]++;
        if(voto[j] == 4) candidatos[4]++;
        if(voto[j] == 0) candidatos[5]++;
        if(voto[j] > 4) candidatos[0]++;
    }
    cout << "Votos do candidato 1: " << candidatos[1] << " voto(s)" << endl;
    cout << "Votos do candidato 2: " << candidatos[2] << " voto(s)" << endl;
    cout << "Votos do candidato 3: " << candidatos[3] << " voto(s)" << endl;
    cout << "Votos do candidato 4: " << candidatos[4] << " voto(s)" << endl;
    cout << "Votos em branco: " << candidatos[5] << " voto(s)" << endl;
    cout << "Votos nulos: " << candidatos[0] << " voto(s)" << endl;
    return 0;
}