#include <stdio.h>

int calcularApotencia(int base, int potencia) {

int resultado;

if(potencia==0 || base<=1){
	printf("O resultado da potenciacao de %d elevado a %d = %d\n", base, potencia, 1);
	return (1);
}
else{
	
	resultado = base * calcularApotencia(base, potencia - 1);
	printf("O resultado da potenciacao de %d elevado a %d = %d\n", base, potencia, resultado);
	return (resultado);
}
}

int main()
{
	int numeroDoUsuario, potenciaDoUsuario, potenciacao;
	
	printf("Digite a base da potencia: ");
	scanf("%d", &numeroDoUsuario);
	printf("Digite a potencia da base: ");
	scanf("%d", &potenciaDoUsuario);
	potenciacao= calcularApotencia(numeroDoUsuario, potenciaDoUsuario);
	printf("\nO resultado da potenciacao de %d elevado a %d = %d", numeroDoUsuario, potenciaDoUsuario, potenciacao);

	return 0;
}
