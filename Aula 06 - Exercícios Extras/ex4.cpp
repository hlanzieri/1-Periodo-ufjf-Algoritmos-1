#include <bits/stdc++.h>
#define TAM 10

using namespace std;

int main() {
    double escalar;
    double vetor[TAM] = {0};
    cout << fixed << setprecision(2);
    cin >> escalar;
    for (int i = 0; i < 10; ++i) {
        cin >> vetor[i];
    }
    for (int i = 0; i < 10; ++i) {
        double resultado = vetor[i] * escalar;
        cout << resultado << endl;
    }
    return 0;
}
