#include<stdio.h>

int main () {
	int input;
	
	printf("masukkan angka: ");
	scanf("%d", &input);
	
	for (int i=0; i<=input; i++) {
		for(int j=0; j<=input; j++) {
			printf("%d\t", i+j);
		}
		printf("\n");
	}
}
