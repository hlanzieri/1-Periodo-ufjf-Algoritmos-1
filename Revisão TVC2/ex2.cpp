#include <bits/stdc++.h>

using namespace std;

int main () {
    int i = 0;
    float vMin = 0, vMax = 0, volumes[200], volumeTotal = 0;
    cin >> vMin >> vMax;
    while(true){
        cin >> volumes[i];
        if(volumes[i] <= 0) break;
        if(volumes[i] <= vMax && volumes[i] >= vMin){
            volumeTotal += volumes[i];
        }
        i++;
    }
    cout << "Volume total: " << fixed << setprecision(2) << volumeTotal << endl;
    return 0;
}