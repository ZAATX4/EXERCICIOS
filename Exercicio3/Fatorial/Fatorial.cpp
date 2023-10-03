// Fatorial.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int fator(int n) {
	int x = 0;
	double produto = 1;
	while (x < n)
	{
		x++;
		produto = produto * x;
	}
	cout << "o valor é " << x << endl;
	cout << "o fator é " << produto << endl;
	

	return produto;
}

int main()
{
	int y;
	while (true)
	{
		cout << "Me dê um número inteiro" << endl;
		cin >> y;
		if (y <= 0)
		{
			cout << "Que não seja negátivo né o animal" << endl;

		}
		else
		{
			break;
		}
		
		
	}
	

	fator(y);
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
