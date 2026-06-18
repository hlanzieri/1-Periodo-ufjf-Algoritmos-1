#include <bits/stdc++.h>

using namespace std;

struct ponto{
    int x, y;
};

float distancia(ponto p1, ponto p2){
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

int main () {
    ponto p1, p2;
    cout << "Insira as coordenadas de p1: " << endl;
    cin >> p1.x >> p1.y;
    cout << endl << "Insira as coordenadas de p2: " << endl;
    cin >> p2.x >> p2.y;
    cout << endl << "A distancia entre os dois pontos eh: " << distancia(p1, p2) << endl;  
    return 0;
}