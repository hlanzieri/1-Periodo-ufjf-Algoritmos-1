#include <bits/stdc++.h>
#define TAM 5

using namespace std;

struct restaurante{
    char nome[50], tipo[50];
    float nota;
};

int main () {
    restaurante restaurantes[TAM];
    int indiceMaiorNota = 0;
    float maiorNota = 0;
    for(int i = 0; i < TAM; i++){
        cout << "Insira o nome do restaurante: ";
        cin.getline(restaurantes[i].nome, 50);
        cout << "Insira o tipo do restaurante: ";
        cin.getline(restaurantes[i].tipo, 50);
        cout << "Insira a nota para o restaurante: ";
        cin >> restaurantes[i].nota;
        if(i != 0){
            if(restaurantes[i].nota > maiorNota){
                maiorNota = restaurantes[i].nota;
                indiceMaiorNota = i;
            }
        } else{
            maiorNota = restaurantes[i].nota;
            indiceMaiorNota = i;
        }
    }
    for(int i = 0; i < TAM; i++){
        cout << "Restaurante - " << restaurantes[i].nome << "; Tipo - " << restaurantes[i].tipo << "; Nota - " << restaurantes[i].nota;
    }
    cout << "O tipo de cozinha do restaurante de maior nota eh: " << restaurantes[indiceMaiorNota].tipo << endl;
    return 0;
}