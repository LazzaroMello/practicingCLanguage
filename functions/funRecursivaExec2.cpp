#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int SomaElementos(int Vet[], int n){
	if (n == 0)return 0;
	return Vet[n - 1] + SomaElementos(Vet, n - 1);
}

int main(){
	setlocale(LC_ALL, "");
	int *Vet, n;
	char C;
	while (C != 'N'){

		printf("\nNúmero de posições: ");
		scanf("%d", &n);
		Vet = (int *)malloc(n * sizeof(int));

		for (int i = 0; i < n; i++){
			printf("Vet[%d]: ", i);
			scanf("%d", &Vet[i]);
		}
		int S = SomaElementos(Vet, n);
		printf("\nSoma = %d", S);
		free(Vet);
		printf("\nDeseja continuar? ");
		scanf("%c", &C);
		C = getchar();
	}
	return 0;
}
