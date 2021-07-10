//Autor: Carlos Eduardo Rodrigues Dos Santos | Nro 12716863.
#include<stdio.h>
#include<string.h>

// Função que varre o primeiro string, compara com o segundo e imprime
// a posição do índice + 1 do primeiro vetor, caso o elemento da primeira string
// seja igual ao primeiro elemento da segunda.
void pesquisar(char s1[], char s2[], int t1, int t2);

int main(){
    char string1[100];
    char string2[100];
    int tamanho1;
    int tamanho2;

    printf("Digite uma frase ou palavra: ");
    scanf("%s", &string1);
    printf("Pesquisar a posicao de:  ");
    scanf("%s", &string2);

// leitura do tamanho utilizado na string.
    tamanho1 = strlen(string1);  
    tamanho2 = strlen(string2);

    pesquisar(string1, string2, tamanho1, tamanho2);

}

void pesquisar(char s1[], char s2[], int t1, int t2){
    for(int i = 0; i < t1; i++){
        for( int j = 0; j < t2; j++){
            if (s1[i] == s2[0]){
                printf("A posicao e: %d \n", i+1);
                return 0;   // impede que o a funcao retorne outras posicoes.
            }
        }

    }

    printf("\n");
}