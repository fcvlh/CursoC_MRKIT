#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Este � o projeto da aula 02 do curso C
	/*Coment�rio em m�ltiplas linhas*/
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	getchar(); // Limpa o buffer do teclado. Por que � necess�rio???
	
	printf("O n�mero digitado foi: %d", numero);
	printf("\n\n");
	system("PAUSE");
	
	return 0;
}
