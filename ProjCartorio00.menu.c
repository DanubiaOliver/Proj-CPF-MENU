#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o

int main()
{
	int opcao=0;
	
	setlocale(LC_ALL, "utf-8"); //utilizar tanto "utf-8" quanto o "Portuguese",surtir� no mesmo efeito.
	
	printf("### Cart�rio da EBAC ###\n\n");
	printf("Escolha a op��o desejada do menu: \n\n");
	printf("\t1 - Registrar nomes \n");
	printf("\t2 - Consultar nomes \n");
	printf("\t3 - Deletar nomes\n\n");
	
	scanf ("%d", &opcao);
	
		system ("cls");
	
	
}
