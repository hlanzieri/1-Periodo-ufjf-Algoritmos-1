#include <bits/stdc++.h>
#define TOTAL_POLIGONOS 5
#define MAX_VERTICES 10
#define MIN_VERTICES 3

using namespace std;

struct Vertice {
    double x;
    double y;
};

struct Poligono {
    int num_vertices;
    string rotulo;
    Vertice vertices[MAX_VERTICES];
};

float calcularPerimetro(Poligono poligonos[], int i) {
    Poligono p = poligonos[i];
    float perimetro = 0.0;
    for (int j = 0; j < p.num_vertices; j++) {
        int proximo_j = (j + 1) % p.num_vertices;
        float x1 = p.vertices[j].x, y1 = p.vertices[j].y, x2 = p.vertices[proximo_j].x, y2 = p.vertices[proximo_j].y;
        float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        perimetro += distancia;
    }
    return perimetro;
}

int main() {
    Poligono lista_poligonos[TOTAL_POLIGONOS];
    for (int i = 0; i < TOTAL_POLIGONOS; i++) {
        int n;
        cin >> n;
        cin.ignore(); 
        string rotulo;
        getline(cin, rotulo);
        if (n < MIN_VERTICES) {
            cout << "Numero de vertices insuficiente! Sera usado o minimo de " << MIN_VERTICES << " vertices." << endl;
            n = MIN_VERTICES;
        } else if (n > MAX_VERTICES) {
            cout << "Numero de vertices excessivo! Será usado o limite de " << MAX_VERTICES << " vertices." << endl;
            n = MAX_VERTICES;
        }
        lista_poligonos[i].num_vertices = n;
        lista_poligonos[i].rotulo = rotulo;
        for (int j = 0; j < n; j++) {
            cin >> lista_poligonos[i].vertices[j].x >> lista_poligonos[i].vertices[j].y;
        }
    }
    int indice_busca;
    cin >> indice_busca;
    float resultado = calcularPerimetro(lista_poligonos, indice_busca);
    cout << fixed << setprecision(2) << "Perimetro: " << resultado << endl;
    return 0;
}