#include <bits/stdc++.h>
#define TAM 10

using namespace std;

void intersecao(int v1[], int v2[], int vInter[]){
    int aux = 0;
    for(int i = 0; i < TAM; i++){ 
        for(int j = 0; j < TAM; j++){
            if(v1[i] == v2[j]){
                vInter[aux] = v1[i];
                aux++;
                break;
            }
        }
    }
    cout << "A intersecao dos dois conjuntos eh:" << endl;
    for(int i = 0; i < aux; i++){
        cout << vInter[i] << " ";
    }
    cout << endl;
}

bool verificaExist(int valor, int vUniao[], int aux){
    for(int i = 0; i < aux; i++){
        if(valor == vUniao[i]) return true;
    }
    return false;
}

void uniao(int v1[], int v2[], int vUniao[], int tamAB){
    int aux = 0;
    for(int i = 0; i < TAM; i++){
        if(!(verificaExist(v1[i], vUniao, aux))){
            vUniao[aux] = v1[i];
            aux++;
        }
    }
    for(int i = 0; i < TAM; i++){
        if(!(verificaExist(v2[i], vUniao, aux))){
            vUniao[aux] = v2[i];
            aux++;
        }
    }
    cout << "A uniao dos dois conjuntos eh:" << endl;
    for(int i = 0; i < aux; i++){
        cout << vUniao[i] << " ";
    }
    cout << endl;
}

int main () {
    int v1[TAM] = {0}, v2[TAM] = {0}, vInter[TAM] = {0}, vUniao[20] = {0}, tamAB = 20;
    for(int i = 0; i < TAM; i++){
        cin >> v1[i];
    }
    for(int i = 0; i < TAM; i++){
        cin >> v2[i];
    }
    intersecao(v1, v2, vInter);
    uniao(v1, v2, vUniao, tamAB);
    return 0;
}