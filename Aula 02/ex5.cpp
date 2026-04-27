#include <iostream>

using namespace std;

int main()
{
    int anos, meses, dias;
    cin >> dias;
    anos = dias/365;
    dias = dias%365;
    meses = dias/30;
    dias = dias%30;
    cout << "anos: " << anos << ", meses: " << meses << ", dias: " << dias;
    return 0;
}