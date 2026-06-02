    #include <bits/stdc++.h>

    using namespace std;

    int main () {
        int numAlunosAprovados = 0, notaAlunos[200] = {0}, notaMin = -1, i = 0;
        while(cin >> notaMin && notaMin < 0 && notaMin > 100);
        while(true){
            cin >> notaAlunos[i];
            if(notaAlunos[i] > 100 || notaAlunos[i] < 0) break;
            if(notaAlunos[i] >= notaMin) numAlunosAprovados++;
            i++;
        }
        cout << "Alunos aprovados: " << numAlunosAprovados;
        return 0;
    }