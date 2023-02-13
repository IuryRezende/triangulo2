#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, num1;

    printf("digite os valores dos lados do triangulo: \n");
    scanf("%d%d%d", &a, &b, &c);
        if(a==b && c==b){
            printf("Qual o seu palpite?\n");
            printf(" 1 - Isosceles\n");
            printf(" 2 - Escaleno\n");
            printf(" 3 - Equilatero\n");
            scanf("%d", &num1);
            switch (num1){
                case 1:
                    printf(" ERROU!!");
                break;

                case 2:
                    printf(" ERROU!!");
                break;

                case 3:
                    printf(" ACERTOU!!");
                break;

                default:
                    printf(" Esse valor nao existe!");
                break;
            }
        }
        else if(a!=b && c!=b){
            printf("Qual o seu palpite?\n");
            printf(" 1 - Isosceles\n");
            printf(" 2 - Escaleno\n");
            printf(" 3 - Equilatero\n");
            scanf("%d", &num1);
            switch (num1){
                case 1:
                    printf(" ERROU!!");
                break;

                case 2:
                    printf(" ACERTOU!!");
                break;

                case 3:
                    printf(" ERROU!!");
                break;

                default:
                    printf(" Esse valor não existe!");
                break;
            }
        }
        else {
            printf("Qual o seu palpite?\n");
            printf(" 1 - Isosceles\n");
            printf(" 2 - Escaleno\n");
            printf(" 3 - Equilatero\n");
            scanf("%d", &num1);
            switch (num1){
                case 1:
                    printf(" ACERTOU!!");
                break;

                case 2:
                    printf(" ERROU!!");
                break;

                case 3:
                    printf(" ERROU!!");
                break;

                default:
                    printf(" Esse valor nao existe!");
                break;
            }
        }

}

