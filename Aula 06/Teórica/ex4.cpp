#include <bits/stdc++.h>

using namespace std;

void potencia(int x){
    int i = 0;
    while(true){
    if (pow(2, i) <= x) cout << pow(2, i) << " ";
        else break;
    i++;
    }
}

int main(){
    int n = 0;
    cin >> n;
    potencia(n);
    return 0;
}
