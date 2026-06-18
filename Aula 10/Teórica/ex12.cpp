#include <iostream>

using namespace std;

struct Vetor {
    float x, y, z;
};

Vetor somar(Vetor v1, Vetor v2) {
    Vetor res;
    res.x = v1.x + v2.x;
    res.y = v1.y + v2.y;
    res.z = v1.z + v2.z;
    return res;
}

Vetor subtrair(Vetor v1, Vetor v2) {
    Vetor res;
    res.x = v1.x - v2.x;
    res.y = v1.y - v2.y;
    res.z = v1.z - v2.z;
    return res;
}

Vetor produtoVetorial(Vetor v1, Vetor v2) {
    Vetor res;
    res.x = v1.y * v2.z - v1.z * v2.y;
    res.y = v1.z * v2.x - v1.x * v2.z;
    res.z = v1.x * v2.y - v1.y * v2.x;
    return res;
}

int main() {
    Vetor v1, v2;
    cout << "Digite as coordenadas do primeiro vetor (x y z): ";
    cin >> v1.x >> v1.y >> v1.z;
    cout << "Digite as coordenadas do segundo vetor (x y z): ";
    cin >> v2.x >> v2.y >> v2.z;
    // Calculando e imprimindo
    Vetor soma = somar(v1, v2);
    cout << "Soma: (" << soma.x << ", " << soma.y << ", " << soma.z << ")" << endl;
    Vetor sub = subtrair(v1, v2);
    cout << "Subtracao: (" << sub.x << ", " << sub.y << ", " << sub.z << ")" << endl;
    Vetor prod = produtoVetorial(v1, v2);
    cout << "Produto Vetorial: (" << prod.x << ", " << prod.y << ", " << prod.z << ")" << endl;
    return 0;
}