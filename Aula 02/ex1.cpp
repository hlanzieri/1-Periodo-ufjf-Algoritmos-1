#include <bits/stdc++.h>

using namespace std;

int main()
{
    float peso = 0, altura = 0;
    cin >> peso >> altura;
    cout << fixed << setprecision(2) << "Peso: " << peso << " kg, Altura: " << altura << " m -> IMC: " << peso/(altura*altura);
    return 0;
}