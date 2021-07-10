//Autor: Carlos Eduardo Rodrigues Dos Santos | N� 12716863.


#include<stdio.h>
#include<locale.h>  // biblioteca para utilizar a fun��o setlocale (encoding ISO 8859-1).
#include<math.h>

int main(){
    int a, b, c, d, e;
    int p1, p2, p3, p4, p5;
    int op;
    float dp;
    

    setlocale(LC_ALL,"");  //Habilita caracteres especiais e acentua��o.
    
    printf("Digite o 1� valor: ");
    scanf ("%d", &a);
    printf("Digite o 2� valor: ");
    scanf ("%d", &b);
    printf("Digite o 3� valor: ");
    scanf ("%d", &c);
    printf("Digite o 4� valor: ");
    scanf ("%d", &d);
    printf("Digite o 5� valor: ");
    scanf ("%d", &e);
    printf( "\n");
    printf ("Selecione a opera��o desejada:\n (1) M�dia Simples \n (2) M�dia ponderada \n (3) Desvio padr�o \n (4) Maior valor \n (5) Menor valor \n (6) Releitura dos valores\n\n");
    printf ("\t Opera��o: ");
    scanf ("%d", &op);

    switch (op) {

        case 1:;
        float media = (a+b+c+d+e)/(float)5;  // calcula a m�dia.
        printf ("A media simples �: %f \n\n", media);
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

        float pond = (a*p1+b*p2+c*p3+d*p4+e*p5)/(float)somap; // calculo da m�dia ponderada.
        printf(" A media ponderada �: %f\n\n", pond);
        break;

        case 3:;

        float media2 = (a+b+c+d+e)/(float)5;
        int vet[5] = {a, b, c, d, e}; //Arranjo vetorial dos n�meros inseridos pelo usu�rio.
        dp = 0.0;
        for (int i = 0; i < 5; i++){
            dp = dp + pow(vet[i]-media2, 2); // Loop para somar a variav�l dp a primeira parte do c�lculo.
        }
        dp = sqrt(dp/5); // Segunda parte do c�lculo.

		printf ("O desvio padr�o �: %f\n\n ", dp);
		break; 

        case 4:;

        if(a > b && a > c && a > d && a > e){           // compara o valor de uma variav�l com as demais.
            printf("O maior valor �: %d\n\n", a);           // imprime se e somente se a vari�vel for maior que as outras.
        } else if (b > a && b > c && b > d && b > e){
            printf("O maior valor �: %d\n\n", b);
        } else if (c > a && c > b && c > d && c > e){
            printf("O maior valor �: %d\n\n", c);
        } else if (d > a && d > b && d > c && d > e){
            printf("O maior valor �: %d\n\n", d);
        } else if (e > a && e > b && e > c && e > d){
            printf("O maior valor �: %d\n\n", e);
        }
        break;

        case 5:;

        if(a < b && a < c && a < d && a < e){           
            printf("O menor valor �: %d", a);             // imprime se e somente se a vari�vel for menor que as outras.
        } else if (b < a && b < c && b < d && b < e){
            printf("O menor valor �: %d", b);
        } else if (c < a && c < b && c < d && c < e){
            printf("O menor valor �: %d", c);
        } else if (d < a && d < b && d < c && d < e){
            printf("O menor valor �: %d", d);
        } else if (e < a && e < b && e < c && e < d){
            printf("O menor valor �: %d", e);
        }
        break;

        case 6:;

        return main();      // retorna para o come�o do programa.
              
    }
    return 0;
    }
