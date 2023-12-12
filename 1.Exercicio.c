#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void limpacache()
{
    fflush(stdin);
}
void limpatela()
{
    system("cls || clear");
}

void numeroTelefone(char numero[], char nome[], char NomeDigitado[])
{
    if (strcmp(nome, NomeDigitado) == 0)
    {
        printf("Numero de telefone: %s \n", numero);
    }
}

struct dados_contato
{
    char nome[200];
    char NumeroTelefone[200];
    char email[200];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    char NomeDigitado[200];
    struct dados_contato contato[3];

    for (i = 0; i < 3; i++)
    {

        printf(" Digite o nome do contato: ");
        gets(contato[i].nome);
        printf(" Digite o numero de telefone: ");
        gets(contato[i].NumeroTelefone);
        printf(" Digite o seu email: ");
        gets(contato[i].email);
        limpatela();
    }

    printf("Digite o nome do contato desejado: ");
    gets(NomeDigitado);

    printf("\n\nExibindo os dados do contato...\n\n");

    for (i = 0; i < 3; i++)
    {

        numeroTelefone(contato[i].NumeroTelefone, contato[i].nome, NomeDigitado);
    }

    return 0;
}