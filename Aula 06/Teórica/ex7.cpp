#include <bits/stdc++.h>

using namespace std;

int main(){
    float divida = 10000, aplica = 1500;
    int tempo = 1;
    while(true){
    if(divida*1.025 == aplica*1.04) break;
        divida*=1.025;
        aplica*=1.04;
        tempo++;
    }
    cout << "O tempo foi de: " << tempo << " meses" << endl;
    return 0;
}
