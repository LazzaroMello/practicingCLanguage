#include<stdlib.h>
#include<stdio.h>

#define tam 3
/*
Faça um programa que leia uma matriz 3 X 3 e verifique quais são os números pares, 
colocando-os em um vetor. Da mesma forma, verifique os números ímpares e os coloque em outro vetor. 
Imprima a matriz e os dois vetores.
 */
int main(){
    int i,j;
	int mat[tam][tam];
	int vet_Par[9];
	int vet_imp[9];
	for (i=0;i<tam;i++){
	    for (j=0;j<tam;j++){
	 		printf("Entre com valor mat[%d][%d]: ",i,j);
	 		scanf("%d",&mat[i][j]);
	    }
	}
	printf("\nMATRIZ GERADA\n");
	 
	for (i=0;i<tam;i++){
	 	for (j=0;j<tam;j++){
	 		printf("%d   ",mat[i][j]);
		}
		printf("\n");
	}
	 
	int indice_PAR=0;
	for (i=0;i<tam;i++){
	 	for (j=0;j<tam;j++){
	        if (mat[i][j]%2==0){
	            vet_Par[indice_PAR]=mat[i][j];
	            indice_PAR++;
			}
	 	}
	}
	printf("\n");	
   	printf("VETOR NUMEROS PARES: ");
	for (i=0;i<indice_PAR;i++){
			printf("%d  ",vet_Par[i]);		
	}
	int indice_IMPAR=0;
	for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
			if (mat[i][j]%2==1){
				vet_imp[indice_IMPAR]=mat[i][j];
				indice_IMPAR++;
			}
		}
	}
	printf("\nVETOR NUMEROS IMPARES: ");
	for (i=0;i<indice_IMPAR;i++){
		printf("%d ",vet_imp[i]);
	}		   	   
    printf("\n");
    system("\nPAUSE");
    return 0;
   }
