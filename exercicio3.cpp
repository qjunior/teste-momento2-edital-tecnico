#include<stdio.h>
int main()
{
	int a;
	
	printf("Insira um valor:");
	scanf("%d",&a);
		
	if(a%2==0)	
	{
		if(a>0)
		{
			printf("Positivo!\n");
		}
		else
		{
			printf("Negativo!\n");
		}
		printf("PAR!");
	}
	else
	{
		printf("IMPAR:");
	}
	
	return 0;
}
