#include <bits/stdc++.h>

using namespace std;

int main () {
    float m[4][2] = {0};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cin >> m[i][j];
        }
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}