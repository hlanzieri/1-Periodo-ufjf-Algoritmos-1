#include <iostream>
#define TAM 10

using namespace std;

int main()
{
    int vet[TAM] = {0};
    for(int i = 0; i < TAM; i++){
       cin >> vet[i];
    }
    for(int i = 0; i < TAM; i++){
       for(int j = i+1; j < TAM; j++){
          if(vet[i] == vet[j] && j != i){
              cout << i << " e " << j << endl;
          }
        }
    }
    return 0;
}