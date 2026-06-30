#include <bits/stdc++.h>
#define turmas 5
#define totalQuestoes 10

using namespace std;

struct turma{
    char nome[50];
    int qtdAlunos = 0, questoes[totalQuestoes] = {0};
};

void qualidadeAprendizado(turma classes[turmas], int indiceTurma){
    for(int i = 0; i < totalQuestoes; i++){
        float percentual = (classes[indiceTurma].questoes[i] * 100.0) / classes[indiceTurma].qtdAlunos;
        if(percentual < 30.0){
            cout << "Apenas " << fixed << setprecision(2) << percentual 
                 << "% dos alunos acertaram a questão de índice " << i 
                 << " na turma " << classes[indiceTurma].nome << endl; 
        }
    }
    int acertos = 0;
    for(int i = 0; i < totalQuestoes; i++){
        float percentual = (classes[indiceTurma].questoes[i] * 100.0) / classes[indiceTurma].qtdAlunos;
        if(percentual > 50.0){
            acertos++;
        }
    }
    cout << acertos << " questões foram respondidas corretamente por mais da metade dos alunos da turma " << classes[indiceTurma].nome << endl;
}

int main () {
    turma classes[turmas]; 
    for(int i = 0; i < turmas; i++){
        cin.getline(classes[i].nome, 50);
        cin >> classes[i].qtdAlunos;
        for(int j = 0; j < totalQuestoes; j++){
            cin >> classes[i].questoes[j];
        }
        cin.ignore();
    }
    int indiceTurma;
    cin >> indiceTurma;
    qualidadeAprendizado(classes, indiceTurma);
    return 0;
}