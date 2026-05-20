#include <bits/stdc++.h>

using namespace std;

int calculaPont(int J1[], int J2[], int R[]){
    for(int i = 0; i < 10; i++){
        if((J1[i] + J2[i]) % 3 == 0) R[0]++;
            else if((J1[i] + J2[i]) % 3 == 1) R[1]++;
                else R[2]++;
    }
    return R[3];
}

int main(){
    int J1[10] = {0}, J2[10] = {0}, R[3] = {0};
    for(int i = 0; i < 10; i++) cin >> J1[i];
    for(int i = 0; i < 10; i++) cin >> J2[i];
    R[3] = calculaPont(J1, J2, R);
    for(int i = 0; i < 3; i++) cout << R[i] << "   ";
    cout << endl;
    return 0;
}