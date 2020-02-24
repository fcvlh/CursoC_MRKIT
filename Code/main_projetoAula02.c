#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Este é o projeto da aula 02 do curso C
	/*Comentário em múltiplas linhas*/
	int numero;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	getchar(); // Limpa o buffer do teclado. Por que é necessário???
	
	printf("O número digitado foi: %d", numero);
	printf("\n\n");
	system("PAUSE");
	
	return 0;
}
