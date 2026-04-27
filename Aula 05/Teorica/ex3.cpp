#include <bits/stdc++.h>

using namespace std;

int main () {
    float nota = 0, nAlunos = 0;
    cin >> nAlunos;
    while(nAlunos > 0){
        cin >> nota;
        if(nota >= 60) cout << "APROVADO";
        else cout << "REPROVADO";
        cout << endl;
        nAlunos --;
    }
    return 0;
}