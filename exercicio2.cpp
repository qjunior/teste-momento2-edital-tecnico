#include<stdio.h>
int main()
{
	int i, j, aux, quant, num[3];

	printf("informe a quantidade de Numeros \n");
	scanf("%d", &quant);

	printf("Informe os numeros \n");

	for (i = 0; i < quant; ++i)
	{
    	scanf("%d", &num[i]);
    }
    
    //Percorre o array nas posições 0, 1 e 2
	for (i = 0; i < quant; ++i)
	{
		//
    	for (j = i + 1; j < quant; ++j)
    	{
        	if (num[i] > num[j])
        	{
            	aux =  num[i];
            	num[i] = num[j];
            	num[j] = aux;
        	}
    	}
	}

	printf("Numeros organizados em ordem crescente \n");
	for (i = 0; i < quant; ++i)
	{
    	printf("%d\n", num[i]);
    }
	
	return 0;

}
	

