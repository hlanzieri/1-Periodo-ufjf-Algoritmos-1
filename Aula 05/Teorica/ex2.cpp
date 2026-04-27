#include <bits/stdc++.h>

using namespace std;

int main () {
    float nota = 0;
    while(nota >= 0 && nota <= 100){
        cin >> nota;
        if(nota >= 60) cout << "APROVADO";
        else cout << "REPROVADO";
        cout << endl;
    }
    return 0;
}