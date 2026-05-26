#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0, andar = 0;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        char frase[200];
        cin.getline(frase, 51);
        cin >> andar;
        cin.ignore();
        // Processa cada caractere da string
        for(int j = 0; frase[j] != '\0'; j++){
            // Subtrai o deslocamento da letra atual
            char letra_original = frase[j] - andar;
            // Se passar do começo do alfabeto ('A'), volta para o final
            if(letra_original < 'A'){
                letra_original = letra_original + 26;
            }
            cout << letra_original;
        }
        cout << endl;
    }
    return 0;
}