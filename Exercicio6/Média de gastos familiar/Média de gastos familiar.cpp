// Média de gastos familiar.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

float med()
{
	float media, somatorio, gastos[9];

	for (size_t i = 0; i < (sizeof gastos[i] /  sizeof(float)); i++)
	{
		somatorio = gastos[i];
	}
	media = somatorio / ((sizeof gastos[0]) / sizeof(float));

	return media;
}

int main()
{
	float seila;
	//bool whil;
    cout << "Hello World!\n";

	cout << "vem um trem do beleleu \n aquele blah blah blah de 1 e 2" << endl;

	cout << med();
	/*cin >> seila;
	if (seila = 1)
	{
		for (size_t i = 0; i < (sizeof med(0000) / sizeof(float)); i++)
		{
			cin >> med(gastos[i]);
			cout << "Quer adicionar um novo valor? \n 1 se sim, 2 se não";
			cin >> seila;
		}
	}
	else
	{
		break;
	}*/
	/*while (whil = true)
	{
		if (seila = 1)
		{
			cin >> med();
		}
		else
		{
			break;
		}
	}*/
	
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
