#include <stdio.h> //biblioteca de comunicao com o usuário
#include <stdlib.h> //biblioteca de alocao de espaÃ§o em memória
#include <locale.h> //biblioteca de alocao de texto por regiÃo
#include <string.h> //biblioteca responsável por cuidar das string
int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];

	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);

	strcpy(arquivo, cpf); //responsável por copiar os valores das strings

	FILE *file; // cria o arquivo
	file = fopen(arquivo,"w"); //cria o arquivo
	fprintf(file,cpf); //salva o valor da variável
	fclose(file);  //fecha o arquivo

	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);

	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);

	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);

	file  = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);

	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);

	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);

	system("pause");
}

int consulta()
{
    setlocale(LC_ALL, "Portuguese");

    char cpf [40];
    char conteudo[200];

    printf("Digite o CPF a ser consultado: ");
    scanf("%s",cpf);

    FILE *file;
    file = fopen(cpf, "r");

    if(file == NULL)
    {
        printf("NÃo foi possível abrir o arquivo, nÃo localizado! \n");
    }

    while(fgets(conteudo, 200, file) != NULL)
    {
        printf("\n Essas sÃo as informações do usuário: ");
        printf("%s", conteudo);
        printf("\n\n");
        
    }
    
    
}
int main()
{
	int opcao = 0; // definindo as variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system("cls");
		
		setlocale(LC_ALL, "Portuguese");  //definindo a linguagem
	
		printf("### Cartório da EBAC ###\n\n");
		printf("Escolha a opção desejada do menu: \n\n"); //início do menu
		printf("\t1 - Registrar nomes \n");
		printf("\t2 - Consultar nomes \n");
		printf("\t3 - Deletar nomes \n\n"); //fim do menu
		printf("opção: ");
	
		scanf("%d", &opcao);  //armazenando a escolha do usuário - na memória da máquina 
	
		system("cls");
	
		switch (opcao)
		{
			case 1:
			printf("Você escolheu o registro de nomes! \n\n");
			system("pause");
			break;

			case 2:
			printf("Você escolheu consultar os nomes! \n\n");
			system("pause");
			break;

			case 3:
			printf("Você escolheu deletar nomes! \n\n");
			system("pause");
			break;

			default:
			printf("Esta opção nÃo está disponível! \n\n");
			system("pause");
			break;

		}  // fim da seleção.
	
	}
}

