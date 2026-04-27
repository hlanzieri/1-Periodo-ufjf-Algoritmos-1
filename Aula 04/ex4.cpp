#include <bits/stdc++.h>

using namespace std;

void idade(int anoHoje, int anoNasc){
    int id = anoHoje - anoNasc;
    if(id <= 3 && id >= 0) cout << id << endl << "Bebê";
    else if(id<=10 && id >=4) cout << id << endl << "Criança";
    else if(id<=18 && id>=11) cout << id << endl << "Adolescente";
    else if(id<=50 && id>=19) cout << id << endl << "Adulta";
    else if(id>=51) cout << id << endl << "Idosa";
}

int main(){
    int anoHoje = 0, anoNasc = 0;
    cin >> anoHoje >> anoNasc;
    idade(anoHoje, anoNasc);
    return 0;
}