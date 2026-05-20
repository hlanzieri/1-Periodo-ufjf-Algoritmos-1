#include <bits/stdc++.h>
#define x 7
using namespace std;

int main(){
    float v[x] = {0};
    for(int i = 0; i < x; i++){
        cin >> v[i];
        if(v[i] > 0) v[i] = -1;
    }
    for(int i = 0; i < x; i++){
        cout << v[i] << endl;
    }
    return 0;
}