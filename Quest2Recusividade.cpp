#include <stdio.h>
int Fibonacci(int elementos)
{
	
    int resultado;
    if(elementos==1 || elementos==2)
    {
	  printf("\nSequencia de Fibonacci de %d = %d", elementos, 1);
	  return (1);
    }

    if(elementos>2)
    {
	  resultado = Fibonacci(elementos-1)+ Fibonacci(elementos-2);
	  printf("\nSequencia de Fibonacci de %d = %d\n", elementos, resultado);
	  return (resultado);
    }
  
}

int main()
{
	int elementosDoUsuario, resultadoDeFibonacci;
	printf("Digite o elementos de elementos da sequencia Fibonacci: ");
	scanf("%d", &elementosDoUsuario);
	resultadoDeFibonacci= Fibonacci(elementosDoUsuario);
	printf("\nSequencia de Fibonacci de %d elementos = %d", elementosDoUsuario, resultadoDeFibonacci);

	return 0;
}
