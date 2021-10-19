#include <stdio.h>
int valor_saque,cem,cinquenta,vinte,dez,cinco,dois,um;

int main()
{
	printf("\nValor do saque:  ");
	scanf("%d",&valor_saque);
	
	cem=valor_saque/100;
	printf ("\nNumero de notas de R$ 100: %d ",cem);
	valor_saque=valor_saque%100;
	cinquenta= valor_saque/50;
	printf ("\nNumero de notas de R$ 50: %d ",cinquenta);
	valor_saque=valor_saque%50;
	vinte=valor_saque/20;
	printf ("\nNumero de notas de R$ 20: %d ",vinte);
	valor_saque=valor_saque%20;
	dez=valor_saque/10;
	printf ("\nNumero de notas de R$ 10: %d ",dez);
	valor_saque=valor_saque%10;
	cinco=valor_saque/5;
	printf ("\nNumero de notas de R$ 5: %d ",cinco);
	valor_saque=valor_saque%5;
	dois=valor_saque/2;
	printf ("\nNumero de notas de R$ 2: %d ",dois);
	valor_saque=valor_saque%1;
	printf ("\nNumero de notas de R$ 1: %d ",valor_saque);
  }