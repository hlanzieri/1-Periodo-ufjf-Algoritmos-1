#include <bits/stdc++.h>

using namespace std;

int nLetras(char frase[], int ind){
    int nMaiusculas = 0;
    for(int i = ind; frase[i] != '\0'; i++){
        if(frase[i] >= 'A' && frase[i] <= 'Z') nMaiusculas++;
    }
    return nMaiusculas;
}

int main () {
    char frase[200];
    cin.getline(frase, 200);
    int ind = 0;
    cin >> ind;
    if(ind > static_cast<int>(strlen(frase))){
        cout << "Texto finalizado antes da posicao indicada" << endl;
    } else{
        int n = nLetras(frase, ind);
        cout << "Foram encontradas " << n << " letras maiusculas no texto apos a posicao indicada" << endl;
    }
    return 0;
}