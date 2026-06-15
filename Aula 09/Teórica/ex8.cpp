#include <bits/stdc++.h>
#define MAX 10

using namespace std;

void lematriz(float x[MAX][MAX], int m, int n){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> x[i][j];
}

void copiazera(float a[MAX][MAX], float b[MAX][MAX], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = b[i][j];
            b[i][j] = 0;
        }
    }
}
void imprimematriz(float x[MAX][MAX], int m, int n){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cout << x[i][j];
}
int main()
{
 float a[MAX][MAX], b[MAX][MAX];
 int m, n;
 cout << "Digite o n. de linhas e de colunas das matrizes: ";
 cin >> m >> n;
 cout << "Forneça os elementos da matriz a:\n";
 lematriz(a,m,n); // leitura da matriz a
 cout << "Forneça os elementos da matriz b:\n";
 lematriz(b,m,n); // leitura da matriz b
 copiazera(a,b,m,n); // a matriz a "recebe" b e b é zerada.
 cout << "\nMatriz a:\n";
 imprimematriz(a,m,n);
 cout << "\nMatriz b:\n";
 imprimematriz(b,m,n);
 return 0;
}
