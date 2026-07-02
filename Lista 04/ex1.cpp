#include <bits/stdc++.h>

using namespace std;

struct endereco{
    char rua[70], numero[10], bairro[20], complemento[50], cep[12], cidade[50], uf[3];
};

struct tel{
    char tel1[20], tel2[20];
};

struct cadastro{
    char nome[50];
    endereco end;
    tel tels;
};

int main () {
    cadastro pessoas[3];
    for(int i = 0; i < 3; i++){
        cin.getline(pessoas[i].nome, 50);
        cin.getline(pessoas[i].end.rua, 70);
        cin.getline(pessoas[i].end.numero, 10);
        cin.getline(pessoas[i].end.bairro, 20);
        cin.getline(pessoas[i].end.complemento, 50);
        cin.getline(pessoas[i].end.cep, 12);
        cin.getline(pessoas[i].end.cidade, 50);
        cin.getline(pessoas[i].end.uf, 3);
        cin.getline(pessoas[i].tels.tel1, 20);
        cin.getline(pessoas[i].tels.tel2, 20);
    }
    for(int i = 0; i < 3; i++){
        cout << "Nome: " << pessoas[i].nome << " Rua: " << pessoas[i].end.rua << " Numero: " << pessoas[i].end.numero << 
        " Bairro: " << pessoas[i].end.bairro << " Complemento: " << pessoas[i].end.complemento << " CEP: " << pessoas[i].end.cep <<
        " Cidade: " << pessoas[i].end.cidade << " UF: " << pessoas[i].end.uf << " Tel. 1: " << pessoas[i].tels.tel1 << " Tel. 2: " << pessoas[i].tels.tel2 << endl;
    }
    return 0;
}