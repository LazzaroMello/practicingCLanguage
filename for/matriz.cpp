#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define P 2

int main(){
   int mat[4][5];
   int i,j;
   int a,b;

   for (i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Entre com valor mat[%d][%d]: " ,i,j);
            scanf("%d",&mat[i][j]);
        }
    }
   printf("\nMATRIZ\n");
   for (i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%d      ",mat[i][j]);
        }
        printf("\n");
    }
   int aux;
   for (i=0;i<2;i++){
        for(j=0;j<5;j++){
            for (a=0;a<2;a++){
               for(b=0;b<5;b++){
                    if (mat[i][j]<mat[a][b]){
                        aux=mat[i][j];
                        mat[i][j]=mat[a][b];
                        mat[a][b]=aux;
                    }
                }
            }
        }
   }
   for (i=2;i<4;i++){
        for(j=0;j<5;j++){
            for (a=2;a<4;a++){
               for(b=0;b<5;b++){
                    if (mat[i][j]>mat[a][b]){
                        aux=mat[i][j];
                        mat[i][j]=mat[a][b];
                        mat[a][b]=aux;
                    }
                }
            }
        }
   }

   printf("\nMATRIZ ORDENADA\n");
   for (i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%d      ",mat[i][j]);
        }
        printf("\n");
    }
system("PAUSE");
return 0;
}