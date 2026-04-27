#include <bits/stdc++.h>

using namespace std;

void validaAprov(float n1, float n2, float trabalho, int faltas){
     if(faltas > 15) cout << "reprovado";
     else if ((n1*3+n2*5 + trabalho*2)/10 > 6) cout << "aprovado";
     else cout << "prova final";
}

int main(){
    float nota1 = 0, nota2 = 0, trabalho = 0;
    int faltas = 0;
    cin >> nota1 >> nota2 >> trabalho;
    cin >> faltas;
    validaAprov(nota1, nota2, trabalho, faltas);
    return 0;
}