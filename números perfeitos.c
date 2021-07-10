#include <stdio.h>


int perfeito(int num);


int main(){
    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);
    
    printf("O numero %d e: %d", num, perfeito(num));

}

int perfeito(int num){
    int div = 0;
    for (int i = 1; i < num; i++){
        if(num % i == 0){
            div = div + i;
        }
    }
    if (div == num){
            return 1;
        } else
         {return 0;}
} 