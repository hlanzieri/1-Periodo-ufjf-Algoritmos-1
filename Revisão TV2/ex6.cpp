#include <bits/stdc++.h>

using namespace std;

int maiusculizarInicioFrases(string &legenda) {
    int modificacoes = 0;
    bool inicioFrase = true;

    for (char &caractere : legenda) {
        if (inicioFrase && isalpha(static_cast<unsigned char>(caractere))) {
            caractere = toupper(static_cast<unsigned char>(caractere));
            modificacoes++;
            inicioFrase = false;
        } else if (caractere == '.' || caractere == '!' || caractere == '?') {
            inicioFrase = true;
        } else if (!isspace(static_cast<unsigned char>(caractere)) && inicioFrase) {
            inicioFrase = false;
        }
    }

    return modificacoes;
}

int main () {
    string legenda;
    getline(cin, legenda);
    int n = maiusculizarInicioFrases(legenda);
    cout << legenda << endl;
    cout << endl << n << " caracteres foram passados para maiuscula";
    return 0;
}