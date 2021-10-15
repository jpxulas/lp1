# lp1
Trabalho de lp1 com Professor Elano


Universidade do Estado da Bahia
Linguagem de Programação I
Prof. Carlos Helano 
ALUNOS:JOÃO PEDRO, THOMAS GAEL E IURI.



	
Etapa 01

1 - Escrever um algoritmo que leia 3 valores a,b,c. Calcule e escreve a média ponderada com pesos = 5 para números acima de 6 e peso = 2,5 para números abaixo ou igual a 6.

//Escrever um algoritmo que leia 3 valores a,b,c. Calcule e escreve a media ponderada 
//com pesos = 5 para numeros acima de 6 e peso = 2,5 para numeros abaixo ou igual a 6.

#include <stdio.h>
#include <iostream>
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


2 - Faça um programa que calcule o fatorial de um número informado pelo usuário. Obs: O fatorial de 0 é 1.

//Faça um programa que calcule o fatorial de um numero informado pelo usuario. Obs: O fatorial de 0 é 1.

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int cont, aux, fat;

int main(){
    printf("entre com um valor para saber o seu fatorial: ");
    scanf("%d",&cont);
    fat=1;
    while (cont>1)
    {
     
      fat=fat*cont;
      cont--;

      
      
        
    }
    printf("%d---",fat);
    
}


3 - Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.
Exemplo: 6 é perfeito, pois 1+2+3 = 6.
       Dado um inteiro positivo n, verificar se n é perfeito.

#include <stdio.h>

Int num,acm=0,div;

Main()

{

	

  Printf(“Insira um numero inteiro positivo: “);

  Scanf(“%d”, &num);

  

  For (div = 1; div < num; div++)

  {

    If (num % div == 0)

      Acm = acm + div;

  }

  

  If (num == acm)

  {

    Printf(“O numero %d e perfeito\n”, num);

  }

  Else 

    Printf(“O numero %d não e perfeito\n”, num);

  

}


4 - Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto mandou criar uma ficha para cada mercadoria com o nome, preço de compra, preço de venda. Fazer um algoritmo que :
Determine e escreva quantas mercadorias proporcionam :
a)	Lucro < 20 %			b) 20% <= Lucro <= 30%		c) Lucro > 30% 

//Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto
//mandou criar uma ficha para cada mercadoria com o nome, preço de compra, preço de venda. Fazer um
//algoritmo que:
//Determine e escreva quantas mercadorias proporcionam :
//a) Lucro < 20 % b) 20% <= Lucro <= 30% c) Lucro > 30%

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int i, cont=0;

struct produto
{
    char name[50];
    int precoC0;
    int precoV;

};


void cadastro(struct produto item[cont]){
    do
    {
        printf("Adicionar produto?\n");
        
        printf("Digite qq digito ou 0 para sair.");
        scanf("%d",&i);
        
		fflush (stdin);
		fgets (item[cont].name,50,stdin);

        printf("Preco de compra: ");
        scanf("%d",&item[cont].precoC);

        printf("Preco de venda: ");
        scanf("%d",&item[cont].precoV);

        printf("\n");
        printf("Produco cadastrado com sucesso\n");
        printf("==============================\n");
        cont++;
    }
    while  (i != 0);
}

void calculoLucro(struct item[cont]){
    int lucro;

    lucro = item[cont].precoV-item[cont].precoC;

}

int main(){
	struct produto item[cont];
	int opcao =0;
	
	while (opcao != 3){
		printf ("\n\n################# MENU ###############");
		printf ("\n1 - Cadastra produtos");
		printf ("\n2 - Calcular Lucro e exibir");
		printf ("\n3 - Sair");
		printf ("\nQual a sua opcao? "); 
		scanf ("%d", &opcao); 
		
		switch (opcao){
			case 1: cadastro (item);
					break; 
			case 2: calculoLucro (item);
					break;
			default: 
					printf ("\nOpcao invalida!");
        }
    }
}



5 - Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial em gramas, fazer um algoritmo que determine o tempo necessário para que essa massa se torne menor do que 0,5 grama. Escreva a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos.

Include<stdio.h>

 Int main()
{
	Float massai,massaf;
	Int horas,minutos,segundos,t=0;
	
	Printf(“\nMassa inicial do material radioativo(g):  “);
	Scanf(“%f”,&massai);
	Massaf=massai;
	While(massaf >=0.5)
	{
		Massaf= massaf/2;
		T=t+50;
		
	}
	Horas = t/3600;
	Minutos = (t%3600)/60;
	Segundos = (t%3600)%60;
	
	Printf(“\nMassa inicial(g)= %f “,massai);
	Printf(“\nMassa final= %f “,massaf);
	Printf(“\nHoras = %d”, horas);
	Printf(“\nMinutos= %d”,minutos);
	Printf(“\nSegundos= %d”,segundos);
	
	
}

6 – Desenvolva um programa em C que simule um caixa eletrônico e leia um certo valor em Reais que represente um saque a ser realizado pelo usuário. O programa deve calcular o menor número de notas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias. 

#include <stdio.h>
Int valor_saque,cem,cinquenta,vinte,dez,cinco,dois,um;
Main()
{
	Printf(“\nValor do saque:  “);
	Scanf(“%d”,&valor_saque);
	
	Cem=valor_saque/100;
	Printf (“\nNumero de notas de R$ 100: %d “,cem);
	Valor_saque=valor_saque%100;
	Cinquenta= valor_saque/50;
	Printf (“\nNumero de notas de R$ 50: %d “,cinquenta);
	Valor_saque=valor_saque%50;
	Vinte=valor_saque/20;
	Printf (“\nNumero de notas de R$ 20: %d “,vinte);
	Valor_saque=valor_saque%20;
	Dez=valor_saque/10;
	Printf (“\nNumero de notas de R$ 10: %d “,dez);
	Valor_saque=valor_saque%10;
	Cinco=valor_saque/5;
	Printf (“\nNumero de notas de R$ 5: %d “,cinco);
	Valor_saque=valor_saque%5;
	Dois=valor_saque/2;
	Printf (“\nNumero de notas de R$ 2: %d “,dois);
	Valor_saque=valor_saque%1;
	Printf (“\nNumero de notas de R$ 1: %d “,valor_saque)

}

