//Autor: Carlos Eduardo Rodrigues Dos Santos | N� 12716863.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

void dicas(palp, sort, tent); // fun��o para dicas.

int main(){

    setlocale(LC_ALL, "");  //Habilita caracteres especiais e acentua��o.

    int escolha = 1;
    int novam;
    int palp;
    int sort;
    int tent;

    srand(time(NULL));   // configura a gera��o de um n�mero aleat�rio.
   
    for (int i = 0; i < 1; i++){     // Define que apenas 1 n�mero ser� gerado.
        sort = (rand() % 100);
    }
    
    printf("\n <<JOGO DE ADVINHA��O>>\n objetivo: O jogador deve acertar o n�mero sorteado no menor n�mero de tentativas. \n Para jogar digite (1). \n Para sair digite (0).\n");
    scanf("%d", &escolha);


    do
    {
        if (escolha == 1){  // inicio do jogo.
        printf("Vamos Come�ar! Insira um n�mero de 0 a 100!\n");
        tent = 0;
        do {
            tent ++;
            printf("Digite um n�mero: ");
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

    } else if (escolha == 0){  // sa� do programa.

        printf("'GAME OVER'. Obrigado por jogar!\n\n");
        return 0;
      }
    } while (escolha ==1 || escolha == 0);

}

void dicas(int palp, int sort, int tent){   // fun��o que compara os valores para dar dicas.
    if(palp > sort){
        printf("Tente um n�mero MENOR...");
    } else if (palp < sort){
        printf("tente um n�mero MAIOR...");
    } else{
        printf("PARAB�NSSSS!! O n�mero certo era (%d)!\n Seu n�mero de tentativas foi: %d\n\n", sort, tent);
        }
    }

