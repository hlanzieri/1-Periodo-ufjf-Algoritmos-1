#include <bits/stdc++.h>

using namespace std;

struct Data{
    int dia, mes, ano;
};

int dias(Data d1, Data d2){
    int totalD1 = d1.ano*365 + d1.mes*30 + d1.dia;
    int totalD2 = d2.ano*365 + d2.mes*30 + d2.dia;
    return abs(totalD2 - totalD1);
}

int main () {
    Data d1, d2;
    cin >> d1.dia >> d1.mes >> d1.ano; // dia mais pra tras
    cin >> d2.dia >> d2.mes >> d2.ano; // dia mais pra frente
    cout << "O numero de dias que separa as datas eh: " << dias(d1, d2) << " dias" << endl;
    return 0;
}