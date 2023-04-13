#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região

int main()
{
	int opcao=0;
	
	setlocale(LC_ALL, "utf-8"); //utilizar tanto "utf-8" quanto o "Portuguese",surtirá no mesmo efeito.
	
	printf("### Cartório da EBAC ###\n\n");
	printf("Escolha a opção desejada do menu: \n\n");
	printf("\t1 - Registrar nomes \n");
	printf("\t2 - Consultar nomes \n");
	printf("\t3 - Deletar nomes\n\n");
	
	scanf ("%d", &opcao);
	
		system ("cls");
	
	
}
