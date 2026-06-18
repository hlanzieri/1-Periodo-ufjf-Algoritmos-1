#include <bits/stdc++.h>

using namespace std;

struct ponto{
    int x, y;
};

void proximo(ponto p1, ponto p2){
    ponto p;
    float prox1 = sqrt(pow(p1.x, 2) + pow(p1.y, 2));
    float prox2 = sqrt(pow(p2.x, 2) + pow(p2.y, 2));
    if(prox1 > prox2) p = p2;
        else p = p1;
    cout << "As coordenadas do ponto mais proximo a origem eh: x = " << p.x << " e y = " << p.y << endl;
 }

int main () {
    ponto p1, p2;
    cout << "Insira as coordenadas de p1: " << endl;
    cin >> p1.x >> p1.y;
    cout << endl << "Insira as coordenadas de p2: " << endl;
    cin >> p2.x >> p2.y;
    proximo(p1, p2);  
    return 0;
}