#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tempoTotal, horas, minutos, segundos;
    cin >> tempoTotal;
    segundos = tempoTotal;
    horas = segundos/3600;
    segundos = segundos%3600;
    minutos = segundos/60;
    segundos = segundos%60;
    cout << "Total: " << tempoTotal << " segundos." << endl;
    cout << "Conversão: " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos.";
    return 0;
}