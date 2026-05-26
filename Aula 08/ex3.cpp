#include <bits/stdc++.h>

using namespace std;

int main(){
    //65-90 -> caracteres maiusculos
    char entrada[200], saida[400];
    cin.getline(entrada, 200);
    int cont = 0;
    for(int i = 0; entrada[i] != '\0'; i++){
        char letra = entrada[i];
        if(letra >= 65 && letra <= 90){
            saida[cont] = ' ';
            cont++;
            saida[cont] = letra;
            cont++;
        } else {
            saida[cont] = letra;
            cont++;
        }
    }
    saida[cont] = '\0';
    for(int i = 0; saida[i] != '\0'; i++){
        cout << saida[i];
    }
    cout << endl;
    return 0;
}