#include <bits/stdc++.h>

using namespace std;

struct Medidas{
    int peso;
    float altura;
};

struct Atleta{
    char nome[100], esporte[50];
    Medidas med;
    int idade;
};

int main () {
    Atleta a1;
    cin.getline(a1.nome, 100);
    cin.getline(a1.esporte, 50);
    a1.med.peso = 70;
    a1.med.altura = 1.75;
    a1.idade = 18;
    cout << endl << "Nome: " << a1.nome << endl;
    cout << "Esporte Praticado: " << a1.esporte << endl;
    cout << "Peso do Atleta: " << a1.med.peso << endl;
    cout << "Altura do Atleta: " << a1.med.altura << endl;
    cout << "Idade do Atleta: " << a1.idade << endl;
    return 0;
}