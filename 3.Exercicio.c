
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct produto_do_galpao
{
    char nome[50];
    float preco;
    int quantidadeEstoque;
};

int opcao;
float calculoFinal;
int i;
int j;
int c;
int produtoEncontrado = 0;
char nomeProduto[20];
char resp[20];
int valorEstoque;
int estoque_atualizado;
struct produto_do_galpao produto[99];
void menu()
{
    printf("================Menu============\n");
    printf("1 - Realizar compra: \n");
    printf("2 - Consultar estoque:\n");
    printf("3 - Sair do programa: \n");
    scanf("%d", &opcao);
    puts("");
}

float calcularEstoque()
{
    calculoFinal = produto[j].preco * produto[j].quantidadeEstoque;
    return calculoFinal;
}

int atualizaEstoque()
{
    produto[j].quantidadeEstoque = produto[j].quantidadeEstoque + valorEstoque;

    return produto[j].quantidadeEstoque;
}

int main()
{

    setlocale(LC_ALL, "portuguese");

    do
    {
        menu();

        switch (opcao)
        {
        case 1:
            do
            {
                c = c + 1;
                fflush(stdin);
                printf("Digite o nome do produto: ");
                gets(produto[c].nome);

                printf("Digite o pre?o: ");
                scanf("%f", &produto[c].preco);

                printf("Digite a quantidade de produto: ");
                scanf("%d", &produto[c].quantidadeEstoque);
                puts("");

                getchar();

                printf("Continuar cadastrando produto? [S/N] ");
                gets(resp);
                fflush(stdin);

            } while (strcmp(resp, "S") == 0);

            break;
        case 2:

            produtoEncontrado = 0;
            fflush(stdin);
            printf("Digite o nome do produto a ser consultado: ");
            gets(nomeProduto);

            fflush(stdin);
            for (i = 0; i <= c; i++)
            {

                if (strcmp(nomeProduto, produto[i].nome) == 0)
                {
                    produtoEncontrado = 1;
                    j = i;
                    printf("Quantidade ATUAL de ESTOQUE: %d\n", produto[j].quantidadeEstoque);

                    fflush(stdin);
                    printf("\n Atualizar estoque? [S/N] \n");
                    gets(resp);

                    fflush(stdin);

                    if (strcmp(resp, "S") == 0)
                    {
                        fflush(stdin);
                        printf("Qual valor a adicionar ao estoque? \n");
                        scanf("%d", &valorEstoque);

                        atualizaEstoque();

                        printf("\nEstoque atualizado!\n\n");
                        printf("Estoque atual: %d\n", produto[j].quantidadeEstoque);
                    }
                }
            }

            if (produtoEncontrado == 0)
            {
                printf("Produto nao localizado.\n");
            }

            break;

        default:
            printf("Opcao invalida");
            break;
        }

    } while (opcao != 3);

    return 0;
}