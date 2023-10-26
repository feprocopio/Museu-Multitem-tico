#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	
	char nome[50];
	int respostas[5];
	int i, j;
	
	printf("Bem-vindo ao questionário avaliativo da Obra: 100 anos da semana de arte moderna!!\n");
    printf("Nome do visitante: ");
    scanf("%49[^\n]", &nome);
    system("cls");

	do{
		printf("Dê uma nota de 1 a 5 para a obra: A estudante Russa Anita Malfatti: ");
	scanf("%d", &respostas[0]); fflush(stdin); //limpa o buffer do teclado
	if(respostas[0] < 1 || respostas[0] > 5){
		printf("Opção inválida!\n");
		}
	}while(respostas[0] < 1 || respostas[0] > 5);
	
	do{
		printf("Dê uma nota de 1 a 5 para a obra: Pierrete Di Cavalcanti: ");
	scanf("%d", &respostas[1]); fflush(stdin); //limpa o buffer do teclado
	if(respostas[1] < 1 || respostas[1] > 5){
		printf("Opção inválida!\n");
		}
	}while(respostas[1] < 1 || respostas[1] > 5);
	
	do{
		printf("Dê uma nota de 1 a 5 para obra: Abaporu Tarsila do Amaral: ");
	scanf("%d", &respostas[2]); fflush(stdin); //limpa o buffer do teclado
	if(respostas[2] < 1 || respostas[2] > 5){
		printf("Opção inválida!\n");
		}
	}while(respostas[2] < 1 || respostas[2] > 5);
	
	do{
		printf("Dê uma nota de 1 a 5 para o atendimento dos funcionários do museu: ");
	scanf("%d", &respostas[3]); fflush(stdin); //limpa o buffer do teclado
	if(respostas[3] < 1 || respostas[3] > 5){
		printf("Opção inválida!\n");
		}
	}while(respostas[3] < 1 || respostas[3] > 5);
	
	do{
		printf("Dê uma nota de 1 a 5 para a estrutura fornecida pelo o museu: ");
	scanf("%d", &respostas[4]); fflush(stdin); //limpa o buffer do teclado
	if(respostas[4] < 1 || respostas[4] > 5){
		printf("Opção inválida!\n");
		}
	}while(respostas[4] < 1 || respostas[4] > 5);
	
	printf("\nAgradecemos pela a sua avaliação %s, até a próxima :).\n", nome);
	
	// Cria o arquivo CSV e escreve as respostas do usuário
	
	FILE *fp;
	fp = fopen("respostas.csv", "a");
	fprintf(fp, "Respostas do usuario %s:\n", nome);
	fprintf(fp, "A estudante Russa Anita Malfatti \n");
	fprintf(fp, "Pierrete Di Cavalcanti \n");
	fprintf(fp, "Abaporu Tarsila do Amaral\n");
	fprintf(fp, "Atendimento dos funcionários\n");
	fprintf(fp, "Estrutura\n");
	for (i = 0; i < 5; i++) {
    fprintf(fp, "%d\n", respostas[i]);
	}
	fclose(fp);

	printf("\nAs suas respostas foram salvas para melhorias no museu, seguindo as\n normas da LGDP (Lei Geral de Proteção de Dados Nº13.709).\n");
	
	system("pause");
	
	return 0;
}
