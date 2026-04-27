#include <bits/stdc++.h>

using namespace std;

void perimetro(float a, float b, float c, float d){
    if(a<=0 || b<=0 || c<=0 || d<=0) cout << "Dimensao invalida!";
    else cout << a << " + " << b << " + " << c << " + " << d << " = " << a+b+c+d;
}