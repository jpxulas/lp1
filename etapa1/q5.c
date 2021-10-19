#include<stdio.h>

 int main()
{
	float massai,massaf;
	int horas,minutos,segundos,t=0;
	
	printf("\nMassa inicial do material radioativo(g):  ");
	scanf("%f",&massai);
	massaf=massai;
	while(massaf >=0.5)
	{
		massaf= massaf/2;
		t=t+50;
		
	}
	horas = t/3600;
	minutos = (t%3600)/60;
	segundos = (t%3600)%60;
	
	printf("\nMassa inicial(g)= %f ",massai);
	printf("\nMassa final= %f ",massaf);
	printf("\nHoras = %d", horas);
	printf("\nMinutos= %d",minutos);
	printf("\nSegundos= %d",segundos);
	
	
}
