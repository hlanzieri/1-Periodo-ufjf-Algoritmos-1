#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    while (n > 0){
        int nota = 0;
        cin >> nota;
        if(nota >= 60) cout << "Aprovado!" << endl;
            else cout << "Reprovado!" << endl;
        n--;
    }
    return 0;
}