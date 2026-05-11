#include <bits/stdc++.h>

using namespace std;

bool primo(int n){
    for(int i = 2; i <= n; i++){
        if( n % i == 0) return false;
    }
return true;
}

int main(){
    int n = 0;
    cin >> n;
    while(n < 0){
    cin >> n;
    }
    if(primo(n)) cout << "eh primo";
        else cout << "nao eh primo";
    return 0;
}