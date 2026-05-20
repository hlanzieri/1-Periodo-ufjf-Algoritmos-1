#include <bits/stdc++.h>

using namespace std;

int main(){
    float v[12] = {0}, somaNeg = 0, cont = 0;
    for(int i = 0; i < 12; i++){
        cin >> v[i];
        if(v[i] < 0){ 
            somaNeg += v[i];
            cont++;
        }
    }
    cout << "Media dos elementos negativos: " << fixed << setprecision(1) << somaNeg/cont << endl;
    return 0;
}