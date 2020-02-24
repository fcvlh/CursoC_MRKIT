#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Utilizar fun��es

// Programa que calcule o quadrado de n�meros inteiros

// Solicita ao usu�rio n�meros inteiros e vai retornando o quadrado dos mesmos

// Condi��o para encerrar o programa, digitar o n�mero zero

// Utilizando o la�o for

// Fun��es auxiliares
void display();
int leitura();
void square();
 
int main(int argc, char *argv[]) {
	int valor;
	
	for (display(); valor = leitura(); display()) {
		square(valor);
	}
	return 0;
}

void display() {
	printf("Digite 0 para sair\n");
	printf("Ou informe um inteiro para calcular o seu quadrado\n");
}

int leitura() {
	int t;
	scanf("%d", &t);
	getchar();
	return t;
}

void square(int numero) {
	printf("O quadrado do n�mero %d � %d\n", numero, (numero*numero));
}
