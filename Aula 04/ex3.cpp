#include <bits/stdc++.h>

using namespace std;

void notas(float a, float b, float c){
    if (a<0 || b<0 || c<0) cout << "Valor invalido";
    else if((a+b+c)/3 >= 6) cout << "Aprovado";
    else cout << "Reprovado";
}