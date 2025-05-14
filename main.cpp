#include <iostream>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Select = 0;
	do 
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua opcão: ";
		std::cin >> Select;

		switch (Select)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
			break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
			break;
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
			break;
		default: std::cout << "\nOpcão Inválida!!!\n";
		}

	} while (Select != 3);
	system("PAUSE");
	return 0;
}
