#include <bits/stdc++.h>

using namespace std;

int main () {
    float v[20] = {0};
    int j = 1;
    for(int i = 1; ; i += 2){
        v[j] = i;
        j++;
        if(j >= 19) break;
    }
    cout << endl;
    for(int i = 0; i < 20; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}