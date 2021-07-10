//Autor: Carlos Eduardo Rodrigues Dos Santos | Nº 12716863.


#include<stdio.h>
#include<locale.h>  // biblioteca para utilizar a função setlocale (encoding ISO 8859-1).
#include<math.h>

int main(){
    int a, b, c, d, e;
    int p1, p2, p3, p4, p5;
    int op;
    float dp;
    

    setlocale(LC_ALL,"");  //Habilita caracteres especiais e acentuação.
    
    printf("Digite o 1º valor: ");
    scanf ("%d", &a);
    printf("Digite o 2º valor: ");
    scanf ("%d", &b);
    printf("Digite o 3º valor: ");
    scanf ("%d", &c);
    printf("Digite o 4º valor: ");
    scanf ("%d", &d);
    printf("Digite o 5º valor: ");
    scanf ("%d", &e);
    printf( "\n");
    printf ("Selecione a operação desejada:\n (1) Média Simples \n (2) Média ponderada \n (3) Desvio padrão \n (4) Maior valor \n (5) Menor valor \n (6) Releitura dos valores\n\n");
    printf ("\t Operação: ");
    scanf ("%d", &op);

    switch (op) {

        case 1:;
        float media = (a+b+c+d+e)/(float)5;  // calcula a média.
        printf ("A media simples é: %f \n\n", media);
        break;

        case 2:;
        printf("Digite o peso de %d :", a);
        scanf ("%d", &p1);
        printf("Digite o peso de %d :", b);
        scanf ("%d", &p2);
        printf("Digite o peso de %d :", c);
        scanf ("%d", &p3);
        printf("Digite o peso de %d :", d);
        scanf ("%d", &p4);
        printf("Digite o peso de %d :", e);
        scanf ("%d", &p5);

        int somap = p1+p2+p3+p4+p5; // soma dos pesos.

        float pond = (a*p1+b*p2+c*p3+d*p4+e*p5)/(float)somap; // calculo da média ponderada.
        printf(" A media ponderada é: %f\n\n", pond);
        break;

        case 3:;

        float media2 = (a+b+c+d+e)/(float)5;
        int vet[5] = {a, b, c, d, e}; //Arranjo vetorial dos números inseridos pelo usuário.
        dp = 0.0;
        for (int i = 0; i < 5; i++){
            dp = dp + pow(vet[i]-media2, 2); // Loop para somar a variavél dp a primeira parte do cálculo.
        }
        dp = sqrt(dp/5); // Segunda parte do cálculo.

		printf ("O desvio padrão é: %f\n\n ", dp);
		break; 

        case 4:;

        if(a > b && a > c && a > d && a > e){           // compara o valor de uma variavél com as demais.
            printf("O maior valor é: %d\n\n", a);           // imprime se e somente se a variável for maior que as outras.
        } else if (b > a && b > c && b > d && b > e){
            printf("O maior valor é: %d\n\n", b);
        } else if (c > a && c > b && c > d && c > e){
            printf("O maior valor é: %d\n\n", c);
        } else if (d > a && d > b && d > c && d > e){
            printf("O maior valor é: %d\n\n", d);
        } else if (e > a && e > b && e > c && e > d){
            printf("O maior valor é: %d\n\n", e);
        }
        break;

        case 5:;

        if(a < b && a < c && a < d && a < e){           
            printf("O menor valor é: %d", a);             // imprime se e somente se a variável for menor que as outras.
        } else if (b < a && b < c && b < d && b < e){
            printf("O menor valor é: %d", b);
        } else if (c < a && c < b && c < d && c < e){
            printf("O menor valor é: %d", c);
        } else if (d < a && d < b && d < c && d < e){
            printf("O menor valor é: %d", d);
        } else if (e < a && e < b && e < c && e < d){
            printf("O menor valor é: %d", e);
        }
        break;

        case 6:;

        return main();      // retorna para o começo do programa.
              
    }
    return 0;
    }
