#include <iostream>
#include <iomanip> // Para configurar as casas decimais

using namespace std;

int main () {
    int qtd = 0;
    float valor = 0, totalGeral = 0;
    while (true) {
        cin >> qtd >> valor;
        if (qtd <= 0 || valor <= 0) {
            break;
        }
        totalGeral += (qtd * valor);
    }
    cout << fixed << setprecision(2) << "O total da compra foi igual a R$" << totalGeral << endl;
    return 0;
}