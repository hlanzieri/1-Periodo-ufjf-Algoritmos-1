#include <bits/stdc++.h>

using namespace std;

struct veiculo{
    char marca[50], modelo[50], placa[8];
    int anoFab, km;
    float valor;
};

int main () {
    veiculo v1, v2;
    // veiculo 1
    cin.getline(v1.marca, 100);
    cin.getline(v1.modelo, 50);
    cin.getline(v1.placa, 8);
    cin >> v1.anoFab;
    cin >> v1.km;
    cin >> v1.valor;
    // veiculo 2
    cin.getline(v2.marca, 100);
    cin.getline(v2.modelo, 50);
    cin.getline(v2.placa, 8);
    cin >> v2.anoFab;
    cin >> v2.km;
    cin >> v2.valor;
    cout << endl << "Marca: " << v1.marca << endl;
    cout << "Modelo: " << v1.modelo << endl;
    cout << "Placa: " << v1.placa << endl;
    cout << "Ano de Fabricacao: " << v1.anoFab << endl;
    cout << "Quilometragem: " << v1.km << endl;
    cout << "Valor do veiculo: " << v1.valor << endl;
    cout << endl << "Marca: " << v2.marca << endl;
    cout << "Modelo: " << v2.modelo << endl;
    cout << "Placa: " << v2.placa << endl;
    cout << "Ano de Fabricacao: " << v2.anoFab << endl;
    cout << "Quilometragem: " << v2.km << endl;
    cout << "Valor do veiculo: R$" << v2.valor << endl;
    return 0;
}