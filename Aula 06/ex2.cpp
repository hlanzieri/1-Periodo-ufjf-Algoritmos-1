#include <bits/stdc++.h>

using namespace std;

void multiplos(int n1, int n2, int x) {
    for (int i = n1; i <= n2; i++) {
        if (i % x == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n1 = 0, n2 = 0, x = 0;
    if (cin >> n1 >> n2 >> x) {
        if (n1 > n2) swap(n1, n2);
        multiplos(n1, n2, x);
    }
    return 0;
}