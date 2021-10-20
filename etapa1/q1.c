//Escrever um algoritmo que leia 3 valores a,b,c. Calcule e escreve a media ponderada 
//com pesos = 5 para numeros acima de 6 e peso = 2,5 para numeros abaixo ou igual a 6.

#include <stdio.h>
#include <stdlib.h>

int a, b, c;
float peso5 = 0.5;
float peso2 = 0.25;
float nota1, nota2, nota3, media, peson1,peson2,peson3;

int main(){
    printf("Digite a nota A: ");
    scanf("%d",&a);
    printf("Digite a nota B: ");
    scanf("%d",&b);
    printf("Digite a nota C: ");
    scanf("%d",&c);

    if (a>=5)
    {
        nota1=a*peso5;
    }
    else if (a<5)
    {
        nota1=a*peso2;
    }
    

    if (b>=5)
    {
        nota2=b*peso5;
    }
    else if (b<5)
    {
        nota2=b*peso2;
    }

    if (c>=5)
    {
        nota3=a*peso5;
    }
    else if (c<5)
    {
        nota3=c*peso2;
    }

    peson1=nota1/a;
    peson2=nota2/b;
    peson3=nota3/c;

    media = (nota1+nota2+nota3)/(peson1+peson2+peson3);

    printf("a media do aluno eh: %0.2f\n", media);

}

