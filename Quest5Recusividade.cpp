#include <stdio.h>

int calcularApotencia(int base, int base2, int potencia) 
{

int resultado, resultado2, resultadoFinal;

if(potencia==0)
{
	return (1);
}
else{
	resultado = base * calcularApotencia(base, 1, potencia - 1);
	resultado2 = base2 * calcularApotencia(1, base2, potencia - 1);
	resultadoFinal= resultado * resultado2;
	return (resultadoFinal);
}
}

int main()
{
	int numeroDoUsuario, numeroDoUsuario2, potenciaDoUsuario, potenciacao;
	
	printf("Digite a base da potencia: ");
	scanf("%d", &numeroDoUsuario);
	printf("Digite a base da potencia: ");
	scanf("%d", &numeroDoUsuario2);
	printf("Digite a potencia da base: ");
	scanf("%d", &potenciaDoUsuario);
	potenciacao= calcularApotencia(numeroDoUsuario, numeroDoUsuario2, potenciaDoUsuario);
	printf("A multiplicacao de %d^%d * %d^%d = %d\n", numeroDoUsuario, potenciaDoUsuario, numeroDoUsuario2, potenciaDoUsuario, potenciacao);

	return 0;
}
