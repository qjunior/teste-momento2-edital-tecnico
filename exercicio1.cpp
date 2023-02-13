#include<stdio.h>
int main()
{
	int a, b, c, d;
	
	 	//Ler e armazena em memória os valores do quatro números
	 	
		printf("Insira o valor de A:");
		scanf("%d",&a);
	
		printf("Insira o valor de B:");
		scanf("%d",&b);
		
		printf("Insira o valor de C:");
		scanf("%d",&c);
		
		printf("Insira o valor de D:");
		scanf("%d",&d);
		
		//Retorna o maior valor dos quatro números
		
		if(a>b && a>c && a>d)
		{
			printf("Valor maior: %d\n", a);
		}
		if(b>a && b>c && b>d)
		{
			printf("Valor maior: %d\n", b);
		}
		if(c>a && c>b && c>d)
		{
			printf("Valor maior: %d\n", c);
		}
		if(d>a && d>b && d>c)
		{
			printf("Valor maior: %d\n", d);
		}
		
			//Retorna o menor valor dos quatro números
		
		if(a<b && a<c && a<d)
		{
			printf("Valor menor: %d\n", a);
		}
		if(b<a && b<c && b<d)
		{
			printf("Valor menor: %d\n", b);
		}
		if(c<a && c<b && c<d)
		{
			printf("Valor menor: %d\n", c);
		}
		if(d<a && d<b && d<c)
		{
			printf("Valor menor: %d\n", d);
		}
		
	return 0;
}