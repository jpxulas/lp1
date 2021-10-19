//Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.

//Exemplo: 6 é perfeito, pois 1+2+3 = 6.

//Dado um inteiro positivo n, verificar se n é perfeito.

#include <stdio.h>

int num,acm=0,div;

int main()
{
	

  printf("Insira um numero inteiro positivo: ");
  scanf("%d", &num);
  
  for (div = 1; div < num; div++)
  {
    if (num % div == 0)
      acm = acm + div;
  }
  
  if (num == acm)
  {
    printf("O numero %d e perfeito\n", num);
  }
  else 
    printf("O numero %d nao e perfeito\n", num);
  
}
