// Potencia.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

void potencia() {
    int Inteiro = 0;
    int result = 0;
    int potencia = 0;
    int yn;
    bool whil = true;

    while (whil = true)
    {
        cout << "Mim de um número" << endl;
        cin >> Inteiro;
        cout << "Agora seu expoente" << endl;
        cin >> potencia;

        result = Inteiro;

        for (size_t i = 0; i < potencia; i++)
        {
            Inteiro = (Inteiro * result);
        }
        cout << "Eu esqueci do que esse programa se trata: " << Inteiro << endl;

        cout << "mais uma vez?" << endl;
        cout << "Ditite 1 se sim" << endl;
        cin >> yn;
        if (yn == 1)
        {
            whil = true;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    cout << "Hello World!\n";

    potencia();
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
