#include <stdio.h>

int MDC(int numeroA, int numeroB)
{
	int resultado;
	
    if(numeroB==0)
    {
	    resultado= numeroA; 
	    return (numeroA);
    }

    else
    {
        resultado = MDC(numeroB, (numeroA % numeroB));
        return (resultado);
    }
  
}

int main()
{
	int numeroX, numeroY;
	printf("Digite um numero:\n");
	scanf("%d", &numeroX);
	printf("Digite outro numero:\n");
	scanf("%d", &numeroY);
	printf("%d \n", MDC(numeroX, numeroY));

	return 0;
}

