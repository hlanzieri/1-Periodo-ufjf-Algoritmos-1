#include <bits/stdc++.h>

using namespace std;

void tabuada(int n){
    cout << endl << "TABUADA DO " << n << endl;
    int i = 0;
    while(i <= 10){
        cout << n << " x " << i << " = " << n*i << endl;
        i++;
    }
}

int main () {
    int n = 1;
    while(n <= 9){
        cout << endl;
        tabuada(n);
        n++;
    }
    return 0;
}