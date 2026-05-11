#include <bits/stdc++.h>

using namespace std;

void divisao(int num1, int num2){
    while(num1 < num2){
        num1++;
        if(num1%11 == 5) cout << num1 << endl;
    }
}

int main()
{
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;
    if(num1 > num2) swap(num1, num2);
    divisao(num1, num2);
    return 0;
}