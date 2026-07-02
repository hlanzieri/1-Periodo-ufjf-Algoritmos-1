#include <bits/stdc++.h>
#define tam 4

using namespace std;

void transposta(float mat1[tam][tam], float mat2[tam][tam]){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            mat2[i][j] = mat1[j][i];
        }
    }
}

void diagonal(float mat1[tam][tam], float mat2[tam][tam]){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(i == j){
                mat2[i][j] = mat1[i][j];
            } else {
                mat2[i][j] = 0;
            }
        }
    }
}

void soma(float mat1[tam][tam], float mat2[tam][tam]){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            mat2[i][j] = mat1[j][i] + mat2[i][j];
        }
    }
}

void media(float mat1[tam][tam], float mat2[tam][tam]){
    float mediaLinha[tam] = {0};
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            mediaLinha[i] += mat1[i][j];
        }
        mediaLinha[i] = mediaLinha[i]/tam;
        mat2[i][i] = mediaLinha[i];
    }
}

void maior_e_menor(float mat1[tam][tam], float mat2[tam][tam]){
    float maior = mat1[0][0], menor = mat2[0][0];
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(maior < mat1[i][j]) maior = mat1[i][j];
            if(menor > mat1[i][j]) menor = mat1[i][j];
        }
    }
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(i % 2 == 0){
                mat2[i][j] = maior;
            } else {
                mat2[i][j] = menor;
            }
        }
    }
}

void acima_da_media(float mat1[tam][tam], float mat2[tam][tam]){
    float media = 0;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            media += mat1[i][j];
        }
    }
    media = media/(tam*tam);
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(mat1[i][j] > media){
                mat2[i][j] = mat1[i][j];
            } else {
                mat2[i][j] = 0;
            }
        }
    }
}

void ordenacao(float mat1[tam][tam], float mat2[tam][tam]){
    vector<float> vals;
    vals.reserve(tam*tam);
    for(int i=0;i<tam;i++) for(int j=0;j<tam;j++) vals.push_back(mat1[i][j]);
    sort(vals.begin(), vals.end());
    int idx = 0;
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            mat2[i][j] = vals[idx++];
        }
    }
}

int main () {
    float mat1[tam][tam], mat2[tam][tam];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> mat1[i][j];
        }
    }
    transposta(mat1, mat2);
    diagonal(mat1, mat2);
    soma(mat1, mat2);
    media(mat1, mat2);
    maior_e_menor(mat1, mat2);
    acima_da_media(mat1, mat2);
    ordenacao(mat1, mat2);
    return 0;
}