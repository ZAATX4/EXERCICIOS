// Media de notas.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

void capivara() {
    int notas[10];
    float tamanho = sizeof notas / sizeof(int);
    int media;

    cout << tamanho << endl;
    cout << "incira aqui sua nota" << endl;
    cin >> notas[0];
    cin >> notas[1];
    cin >> notas[2];
    cin >> notas[3];
    cin >> notas[4];
    cin >> notas[5];
    cin >> notas[6];
    cin >> notas[7];
    cin >> notas[8];
    cin >> notas[9];
    int somatoria = notas[0] + notas[1] + notas[2] + notas[3] + notas[4] + notas[5] + notas[6] + notas[7] + notas[8] + notas[9];
    cout << somatoria << endl;

    media = somatoria / tamanho;

    cout << "A média da turma é " << media << endl;
    
};

int main()
{
    std::cout << "Hello World!\n";

    capivara();
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
