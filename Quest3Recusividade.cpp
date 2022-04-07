#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void trocarPosicoes(char vetor[], int inicioDoVetor, int fimDoVetor)
{

    int auxiliarParaTroca;
    if(inicioDoVetor<fimDoVetor)
    {   
		auxiliarParaTroca = vetor[inicioDoVetor];
		vetor[inicioDoVetor] = vetor[fimDoVetor];
		vetor[fimDoVetor] = auxiliarParaTroca;
	    trocarPosicoes(vetor, inicioDoVetor + 1, fimDoVetor - 1);
    }

}

void imprimirVetor(char vetor[], int tamanhoDoVetor)
{
	
    if(tamanhoDoVetor == 1)
    {
	    printf("%c ", vetor[tamanhoDoVetor - 1]);
	}
	else
	{
        imprimirVetor(vetor, tamanhoDoVetor - 1);
        printf("%c ", vetor[tamanhoDoVetor - 1]);
    }
    
}

int main()
{   
	int tamanhoDoVetorDoUsuario;
    char vetorDoUsuario[30];
    printf("Digite uma palavra para ser invertida\n");
    scanf(" %[^\n]s", vetorDoUsuario);
    tamanhoDoVetorDoUsuario = strlen (vetorDoUsuario);
    imprimirVetor(vetorDoUsuario, tamanhoDoVetorDoUsuario);
    trocarPosicoes(vetorDoUsuario, 0, tamanhoDoVetorDoUsuario - 1);
    printf("\n");
    imprimirVetor(vetorDoUsuario, tamanhoDoVetorDoUsuario);
    
	return 0;
}
