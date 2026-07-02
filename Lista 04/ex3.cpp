#include <bits/stdc++.h>

using namespace std;

struct vetor{
    float x, y, z;
};

vetor soma(vetor A, vetor B){
    vetor X;
    X.x = A.x + B.x;
    X.y = A.y + B.y;
    X.z = A.z + B.z;
    return X;
}

vetor multA(vetor A, vetor B){
    float maior = B.x;
    if(maior < B.y) maior = B.y;
    if(maior < B.z) maior = B.z;
    vetor mult;
    mult.x = A.x*maior; 
    mult.y = A.y*maior;
    mult.z = A.z*maior;
    return mult;
}

int main () {
    vetor A, B;
    cin >> A.x >> A.y >> A.z;
    cin >> B.x >> B.y >> B.z;
    vetor S = soma(A, B);
    cout << "Soma de Vetores: S = (" << S.x  << ", " << S.y << ", " << S.z << ")" << endl;
    vetor Am = multA(A, B);
    cout << "Multiplicação coordenada de maior valor de B: (" << Am.x  << ", " << Am.y << ", " << Am.z << ")" << endl;
    return 0;
}