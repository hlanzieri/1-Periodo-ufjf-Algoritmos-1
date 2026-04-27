#include <iostream>
#include <iomanip>

using namespace std;

void mediaCombustivel(float kms, float litros){
    float media = kms/litros;
    cout << fixed << setprecision(2) << media << " (km/l)";
}

int main()
{
    float kms, litros;
    cin >> kms;
    cin >> litros;
    mediaCombustivel(kms, litros);
    return 0;
}