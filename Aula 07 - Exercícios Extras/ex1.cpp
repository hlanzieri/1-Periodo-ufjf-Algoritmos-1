#include <bits/stdc++.h>

using namespace std;

void inverteString(char palavra[]){
    for(int i = strlen(palavra) - 1; i >= 0; i--){
        cout << palavra[i];
    }
}

int main () {
    char palavra[50] = {};
    cin.getline(palavra, 50);
    inverteString(palavra);
    return 0;
}