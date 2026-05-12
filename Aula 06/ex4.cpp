#include <bits/stdc++.h>

using namespace std;

int main(){
    int N = 0;
    float S = 1;
    cin >> N;
    if(N > 0){
    cout << "1";
    for(float i = 2; i <= N; i++){
        cout << " + 1/" << i; 
        S += 1/i;
    }
    cout << endl << fixed << setprecision(3) << S << endl;
    }
    return 0;
}