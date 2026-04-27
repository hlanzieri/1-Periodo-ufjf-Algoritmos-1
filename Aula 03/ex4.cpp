#include <iostream>
#include <iomanip>

using namespace std;

void nMin(float p1, float p2){
    float nota = (20-p1-p2)/2;
    cout << "Nota necessaria: " << fixed << setprecision(2) << nota;
}

int main()
{
    float p1, p2;
    cin >> p1;
    cin >> p2;
    nMin(p1, p2);
    return 0;
}