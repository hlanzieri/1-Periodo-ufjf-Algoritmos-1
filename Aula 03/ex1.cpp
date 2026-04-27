#include <iostream>

using namespace std;

int idadeEmDias(){
    int ano, mes, dias;
    cin >> ano;
    cin >> mes;
    cin >> dias;
    int totalDias = ano*365 + mes*30 + dias;
    cout << totalDias;
    return totalDias;
}