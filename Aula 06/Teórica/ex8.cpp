#include <bits/stdc++.h>

using namespace std;

int main(){
int s = 0;
for(int i = 0; i <= 24; i++){
    s += pow(2, i+1)/(50-2*i);
}
cout << "S = " << s << endl;
return 0;
}