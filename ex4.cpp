#include <iostream>

using namespace std;

int main(){
    cout << "Erros devem ser" ;
    cout << "corrigidos na ordem em que sao identificados,";
    cout << " pois ao corrigir ";
    cout << "um erro \nOutros podem ser identificados";
    return 0;
    /* Os erros foram:
    1) Falta de aspas duplas para fechar o cout da linha 6
    2) O comando da linha 8 estah escrito errado, o correto eh 'cout' ao inves de 'out'
    3) Na linha 9 estah faltando um simbolo de menor apos o cout
    */
}