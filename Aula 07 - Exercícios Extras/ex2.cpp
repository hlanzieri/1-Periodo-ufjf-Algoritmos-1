#include <bits/stdc++.h>

using namespace std;

int main() {
    int numItens;
    if (!(cin >> numItens) || numItens <= 0) {
        cout << "ERRO: Quantidade incorreta" << endl;
        return 0;
    }
    // Vetores para armazenar os totais de cada um
    // Índices: 0 = Arthur, 1 = Bruno, 2 = Carlos, 3 = Diego
    double totais[4] = {0}, totalTodos = 0.0;
    for (int i = 0; i < numItens; i++) {
        int quantidade;
        double precoUnitario;
        string nome;
        cin >> quantidade >> precoUnitario >> nome;
        // Validação da quantidade
        if (quantidade <= 0) {
            cout << "ERRO: Quantidade de itens incorreta" << endl;
            return 0;
        }
        // Validação do preço
        if (precoUnitario <= 0) {
            cout << "ERRO: Valor incorreto" << endl;
            return 0;
        }
        // Processamento e validação do nome
        double custoItem = quantidade * precoUnitario;
        if (nome == "Arthur") {
            totais[0] += custoItem;
        } else if (nome == "Bruno") {
            totais[1] += custoItem;
        } else if (nome == "Carlos") {
            totais[2] += custoItem;
        } else if (nome == "Diego") {
            totais[3] += custoItem;
        } else if (nome == "Todos") {
            totalTodos += custoItem;
        } else {
            cout << "ERRO: Nome incorreto" << endl;
            return 0;
        }
    }
    // Dividindo os custos comuns ("Todos") igualmente entre os 4 estudantes
    double parcelaTodos = totalTodos / 4.0;
    for (int i = 0; i < 4; i++) {
        totais[i] += parcelaTodos;
    }
    // Configurando a saída para exibir duas casas decimais
    cout << fixed << setprecision(2);
    // Imprimindo os resultados na ordem correta
    cout << "Total do Arthur: " << totais[0] << endl;
    cout << "Total do Bruno: " << totais[1] << endl;
    cout << "Total do Carlos: " << totais[2] << endl;
    cout << "Total do Diego: " << totais[3] << endl;
    return 0;
}