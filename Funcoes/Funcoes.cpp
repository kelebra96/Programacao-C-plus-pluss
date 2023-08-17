// Funcoes.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;


void saudacao() {
    printf("Seja bem vindo!!!");
}

int soma(int n1, int n2) {
    int r = n1 + n2;
    return r;
}

int main()
{
    saudacao();
    int v1 = 0;
    int v2 = 0;
    cout << "informe um numero"<<endl;
    cin >> v1;
    cout << "informe o segundo numero"<<endl;
    cin >> v2;
    int r = soma(v1, v2);
    
    cout << "A soma dos numeros e:" << r << endl;

    
    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
