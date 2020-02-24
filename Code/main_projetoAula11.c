/*
  Sistema de banco de dados simples
  
  Seleciona os vendedores por região
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
int main(int argc, char *argv[]) {
	char regiao, vendedor;
	
	printf("Regioes: Leste, Oeste, Norte\n");
	printf("Informe a primeira letra da regiao: ");
	regiao = getche();  // semelhante a função scanf
						// lê um comando do teclado
	regiao = toupper(regiao); // converte as letras digitadas pelo usuário para maiúscula
	printf("\n");
	
	switch(regiao) {
		case 'L':
			printf("Vendedores: Ricardo, Jose, Mariana \n");
			printf("Informe a primeira letra do vendedor: ");
			vendedor = toupper(getche());
			printf("\n");
		 	switch(vendedor) {
				case 'R':
					printf("Vendas: R$%d\n", 5000);
					break;
				case 'J':
					printf("Vendas: R$%d\n", 12000);
					break;
				case 'M':
					printf("Vendas: R$%d\n", 18000);
					break;
				}	
			break;
		case 'O':
			printf("Vendedores: Rafael, Joana, Pedro \n");
			printf("Informe a primeira letra do vendedor: ");
			vendedor = toupper(getche());
			printf("\n");
			switch(vendedor) {
				case 'R':
					printf("Vendas: R$%d\n", 5000);
					break;
				case 'J':
					printf("Vendas: R$%d\n", 12000);
					break;
				case 'P':
					printf("Vendas: R$%d\n", 18000);
					break;
				}	
			break;
		case 'N':
			printf("Vendedores: Fabiana, Gabriela, Roberto \n");
			printf("Informe a primeira letra do vendedor: ");
			vendedor = toupper(getche());
			printf("\n");
			switch(vendedor) {
				case 'F':
					printf("Vendas: R$%d\n", 3000);
					break;
				case 'G':
					printf("Vendas: R$%d\n", 6000);
					break;
				case 'R':
					printf("Vendas: R$%d\n", 9000);
					break;
				}	
			break;
	}
	return 0;
}
