#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j;
	
	for(i=0; i<10; i++) {
		printf("Linha %d\n", i);
	}
	
	for(i=9; i>=0; i--) {
		printf("Linha %d\n", i);
	}
	
	
	for(i=0; i<10; i++) {
		printf("Linha %d\n", i);
		for(j=0; j<5; j++) {
			printf("teste %d\n", j);
		}
		
	}
	
	return 0;
}
