#include <bits/stdc++.h>

using namespace std;

int main () {
    int x = 0;
    cin >> x;
    for(int i = 0; i < 9; i++){
        int aux = 0;
        cin >> aux;
        if(aux < x) x = aux;   
    }
    cout << endl << "O menor valor lido foi: " << x << endl;
    return 0;
}