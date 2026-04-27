#include <iostream>
#include <iomanip>

using namespace std;

float salarioLiquido(float sBruto, float vHorasExt, float nHorasExt){
    float sL = (sBruto + (vHorasExt*nHorasExt))*0.92;
    return sL;
}

int main()
{
    float sBruto, vHorasExt, nHorasExt;
    cin >> sBruto >> vHorasExt >> nHorasExt;
    cout << "Salario Liquido: " << fixed << setprecision(2) << salarioLiquido(sBruto, vHorasExt, nHorasExt);
    return 0;
}