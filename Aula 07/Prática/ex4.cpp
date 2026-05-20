#include <bits/stdc++.h>

using namespace std;

void calculaAv(){
    int notas[99], i = 0;
    float avPess = 0, avRuim = 0, avBoa = 0, avOtima = 0;
    while(true){
        int x = 0;
        cin >> x;
        if(x <= 100 && x >= 0){
            notas[i] = x;
            i++;
        } else break;
    }
    for(int j = 0; j < i; j++){
        if(notas[j] <= 25) avPess++;
            else if(notas[j] <= 50) avRuim++;
                else if(notas[j] <= 75) avBoa++;
                    else avOtima++;
    }
    cout << "Avaliações péssimas: " << fixed << setprecision(2) << avPess*100/(i) << "%";
    cout << endl << "Avaliações ruins: " << fixed << setprecision(2) << avRuim*100/(i) << "%";
    cout << endl << "Avaliações boas: " << fixed << setprecision(2) << avBoa*100/(i) << "%"; 
    cout << endl << "Avaliações ótimas: " << fixed << setprecision(2) << avOtima*100/(i) << "%" << endl;
}

int main(){
    calculaAv();
    return 0;
}