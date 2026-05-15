#include <bits/stdc++.h>

using namespace std;

void media(){
    float soma = 0, x = 0;
    int cont = 0;
    cin >> x;
    while(x != 0){
        soma += x; 
        cin >> x;
        cont++;
    }    
    cout << "Media = " << soma/cont;
}