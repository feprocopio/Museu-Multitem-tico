#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int  num, pagamento, quantidade, introducao;
    float preco_total;
    float museu_inteira = 10.0;
    float museu_meia = 5.0;
    char nome[5];
    int museu1;
    int frase[50];
    FILE * pont_arq;

    printf("\tInforme o seu nome: ");
    scanf("\t\n\n%s", nome);
    system("cls");
    printf("\tOl� %s, � uma prazer recebe-lo(a) em nosso Museu!!!\n", nome);


    printf("\t---------------------------------------\n");
    printf("\t SELECIONE O TIPO DE INGRESSO: \n\n");


			do
    			{
				printf("\t [1]Inteira: 10,00 R$ \n");
        		printf("\t [2]Meia: 5,00 R$ \n");
        		scanf("%i",&museu1); //variavel forma de pagamento

                frase [50]= &museu1;

                pont_arq = fopen("meiaouinteira.csv", "a"); // "a" vai adicionar mais conteudo
        		// testando para ver se o arquivo foi realmente criado
        		if (pont_arq == NULL)
        {
            printf("Erro ao tentar abrir!");
            exit(1);
        }
        else{
            printf("Por gentileza, confirme novamente a op��o escolhida, [1] ou [2] \n");
            scanf("%s", frase);
            // usando printf para armazenar a string no arquivo
            fprintf(pont_arq, "%s\n", &frase);

            // usanfo fclose para fechar o arquivo
            fclose(pont_arq);
            printf("\nDados gravados com sucesso\n");
        }

    fclose(pont_arq);

        		if (museu1 == 0)  //se o usu�rio digitar nenhum dos numeros espepcificados
        		{
            		museu1 = 3;
        		}
        			if (museu1 > 2)
        			{
            			printf("Op��o invalida, tente novamente.\n"); // repeti��o at� ele digitar corretamente
        			}

    			}while(museu1 > 2 );(museu1 < 1);

    printf("\t---------------------------------------\n");

    printf("Quantos ingressos voc� deseja comprar? ");
    scanf("%d", &quantidade);
    if ( museu1 ==1 ) //se ele escolher ingresso inteira
    {
        float preco_total = quantidade * museu_inteira;
        printf(" Pre�o total: R$%.2f\n", preco_total);
    }

    if ( museu1 ==2 )  //se ele escolher ingresso meia
    {
        float preco_total = quantidade * museu_meia;
        printf(" Pre�o total: R$%.2f\n", preco_total);
    }

    for( ; ;)
    {
        printf("\n\n\tQual ser� a forma de pagamento?\n\t[1] PIX\n\t[2] Dinheiro\n\t[3] D�bito\n\t[4] Cr�dito\n");
        scanf("%d", &pagamento);
        if (pagamento == 1)
        {
            system("cls");

            printf("\tPagamento sendo processado...\n");
            Sleep(3000);
            system("cls");
            printf("\tPagamento aprovado!\n");
            printf("\tGerando seu Token...\n");
            Sleep(1000);
            break;
        }
        if (pagamento == 2)
        {
            system("cls");//para limpar a tela
            printf("\tPagamento sendo processado...\n");
            Sleep(3000);
            system("cls");
            printf("\tPagamento aprovado!\n");
            printf("\tGerando seu Token...\n");
            Sleep(1000);
            break;
        }

        if (pagamento == 3)
        {
            system("cls");//para limpar a tela
            printf("\tPagamento sendo processado...\n");
            Sleep(3000);
            system("cls");
            printf("\tPagamento aprovado!\n");
            printf("\tGerando seu Token...\n");
            Sleep(1000);
            break;
        }

        if (pagamento == 4)
        {
            system("cls");//para limpar a tela

            printf("\tPagamento sendo processado...\n");
            Sleep(3000);
            system("cls");
            printf("\tPagamento aprovado!\n");
            printf("\tGerando seu Token...\n");
            Sleep(1000);
            break;
        }
        else
        {
            printf("\nOp��o invalida, tente novamente.\n");
        }
    }


    /* Fun��o srand vai utilizar a leitura do relogio do sistema*/
    srand(time(NULL));
    num = rand() % 100000; /* Fun��o para escolher um num�ro aleat�ria (token)*/
    printf("\n\tSeu token � o N� %d\n", num);

    int verificar;

    printf("\n\n\n\t\t\t\t\t\t\tCarregando...\n");
    Sleep(2000);
    for( ; ; )
    {
        printf("\t\nInforme o seu token: ");
        scanf("%d", &verificar);
        system("cls");//para limpar a tela
        printf("Validando...");
        Sleep(1500);

        if(verificar != num)
        {
            system("cls");
            Sleep(4000);
            printf("Acesso negado!");
            printf("\n\n\t\t\t\t\t\t\tToken inv�lido. Tente novamente:     Pedido: N� %d", num);
        }
        else
        {
            printf("\n\t\t\t\t\t\tAcesso autorizado...  ", verificar);
            Sleep(1500);
            printf("\n\t\t\t\t\tSeja bem vindo(a) ao nosso Museu, %s!!!", nome);
            break;
        }
    }

    printf("\n\n\n-----------------------------------------------------------------------------------------\n");


}
