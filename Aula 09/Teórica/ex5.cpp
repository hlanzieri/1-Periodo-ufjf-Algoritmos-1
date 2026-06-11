#include <bits/stdc++.h>

using namespace std;

int menor(float m[5][4]){
    int menor = m[0][0];
    for(int i = 0; i < 5; i++)
        for(int j = 1; j < 4; j++)
            if(m[i][j] < menor) menor = m[i][j];
    return menor;
}

int main () {
    float m[5][4] = {};
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 4; j++)
            cin >> m[i][j];
    cout << endl << "O menor valor presente na matriz eh: " << menor(m) << endl;
    return 0;
}