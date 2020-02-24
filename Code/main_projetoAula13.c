#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*

comeco:
	comando;
	comando2;
	comando3;
	goto comeco;
*/
int main(int argc, char *argv[]) {
	
	int i = 0, j = 1, erros = 0, acertos = 0, opcao, resposta;
	
	inicio:
		for (j = 1; j < 10; j++) {
			printf("Qual é a resposta %d + %d?\n", i, j);
			scanf("%d", &resposta);
			getchar();
			
			if (resposta != (i + j)) {
				erros++;
				printf("Resposta errada!\n");
			}
			else {
				acertos++;
				printf("Resposta correta\n");
			}
		}
		
		printf("Acertos %d\n", acertos);
		printf("Erros %d\n", acertos);
		
	meio:
		printf("Continuar respondendo (S/N)\n");
		opcao = toupper(getche());
		getchar();
		
		printf("\n");
		
		switch(opcao) {
			case 'S':
				i++;
				goto inicio;
				break;
			case 'N':
				goto fim;
				break;
			default:
				printf("Opção inválida\n");
				goto meio;
				break;
		}
		
	fim:
		
	
	return 0;
}
