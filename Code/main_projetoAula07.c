#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=2;
	int b=5;
	printf("Digite um valor para a:");
	scanf("%d", &a);
	getchar();
	printf("Digite um valor para b:");
	scanf("%d", &b);
	getchar();
	
	if (a < b) {
		printf("a menor que b\n\n");
	}
	else if (b < a) {
		printf("b menor que a \n\n");
	}
	else {
		printf("a eh igual a b \n\n");
	}
	return 0;
}
