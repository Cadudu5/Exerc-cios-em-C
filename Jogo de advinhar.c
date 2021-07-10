//Autor: Carlos Eduardo Rodrigues Dos Santos | Nº 12716863.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

void dicas(palp, sort, tent); // função para dicas.

int main(){

    setlocale(LC_ALL, "");  //Habilita caracteres especiais e acentuação.

    int escolha = 1;
    int novam;
    int palp;
    int sort;
    int tent;

    srand(time(NULL));   // configura a geração de um número aleatório.
   
    for (int i = 0; i < 1; i++){     // Define que apenas 1 número será gerado.
        sort = (rand() % 100);
    }
    
    printf("\n <<JOGO DE ADVINHAÇÃO>>\n objetivo: O jogador deve acertar o número sorteado no menor número de tentativas. \n Para jogar digite (1). \n Para sair digite (0).\n");
    scanf("%d", &escolha);


    do
    {
        if (escolha == 1){  // inicio do jogo.
        printf("Vamos Começar! Insira um número de 0 a 100!\n");
        tent = 0;
        do {
            tent ++;
            printf("Digite um número: ");
            scanf("%d", &palp);
            dicas(palp, sort, tent);

        } while (palp != sort);

         printf ("Pressione 0 para sair, ou qualquer outra tecla para continuar...\n\n ");
         scanf("%d", &novam);
         if (novam == 0){
             return 0;
         } else {
             return main();
         }

    } else if (escolha == 0){  // saí do programa.

        printf("'GAME OVER'. Obrigado por jogar!\n\n");
        return 0;
      }
    } while (escolha ==1 || escolha == 0);

}

void dicas(int palp, int sort, int tent){   // função que compara os valores para dar dicas.
    if(palp > sort){
        printf("Tente um número MENOR...");
    } else if (palp < sort){
        printf("tente um número MAIOR...");
    } else{
        printf("PARABÉNSSSS!! O número certo era (%d)!\n Seu número de tentativas foi: %d\n\n", sort, tent);
        }
    }

