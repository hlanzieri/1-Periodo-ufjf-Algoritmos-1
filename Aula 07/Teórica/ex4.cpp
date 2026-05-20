#include <bits/stdc++.h>

using namespace std;

int main () {
    float v[5] = {0}, soma = 0;
    for(int i = 0; i < 7; i++) cin >> v[i];
    for(int i = 0; i < 7; i++) soma += v[i];
    cout << "A média dos elementos do vetor é " << soma/7;
    return 0;
}