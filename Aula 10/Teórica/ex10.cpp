#include <bits/stdc++.h>

using namespace std;

struct Pessoa {
    char nome[101];
    int idade;
};

void ordenar(Pessoa pessoas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (pessoas[j].idade > pessoas[j + 1].idade) {
                Pessoa temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }
        }
    }
}

int main() {
    Pessoa pessoas[3];
    cout << "Digite os dados de 3 pessoas:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Pessoa " << i+1 << ":" << endl;
        cout << "Nome (máx 100 caracteres): ";
        cin.getline(pessoas[i].nome, 100);        
        cout << "Idade: ";
        cin >> pessoas[i].idade;
        cout << endl;
    }
    ordenar(pessoas, 3);
    cout << "=== Pessoas ordenadas por idade (crescente) ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << pessoas[i].nome << " - " << pessoas[i].idade << "anos" << endl;
    }
    return 0;
}