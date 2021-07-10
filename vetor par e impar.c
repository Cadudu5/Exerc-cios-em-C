#include<stdio.h>

void ParImpar(int v1[], int a);

int main(){
    int m;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &m);

    int vetor[m];

    for (int i = 0; i < m; i++){
        vetor[i] = i+1;
    }

    ParImpar(vetor, m);

}

void ParImpar(int v1[], int a){
    printf ("Vetor par: {");
    for(int i = 1; i <= a; i++){
        if (i%2 == 0) {
            printf("%d ", i);
        }
    }
    printf("}\n");

    printf ("Vetor impar: {");
    for(int i = 1; i <= a; i++){
        if (i%2 != 0) {
            printf("%d ", i);
        }
    }
    printf("}\n");

}






   






    
    
      
   


   

