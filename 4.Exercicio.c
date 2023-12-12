#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int op;
float depositar;
float saque;
float resultado;
float deposito;
float valor;
float resultadoDepo;

struct banco
{
    char nome[200];
    char nmrConta[200];
    char tipoconta[200];
    float saldo;
};
float depositoo(float depositar)
{
    float deposito;
    deposito = deposito + depositar;
    return deposito;
}

float Sacar(float saque)
{
    float sacado;
    sacado = sacado + saque;
};

void menu()
{
    printf("1- Depositar\n");
    printf("2- Sacar\n");
    printf("3- Imprimir saldo atual\n");
    printf("Digite o numero de sua opçao:");
    scanf("%d", &op);
    fflush(stdin);
};

float ValorTotal(float saque, float deposito)
{
    return saque - deposito;
};

int main()
{
    setlocale(LC_ALL, "portuguese");
    struct banco conta;

    do
    {
        menu();

        switch (op)
        {
        case 1:

            printf("Digite seu nome: ");
            gets(conta.nome);

            fflush(stdin);

            printf("Digite a numero da conta: ");
            gets(conta.nmrConta);

            fflush(stdin);

            printf("Digite o tipo da conta: ");
            gets(conta.tipoconta);

            fflush(stdin);

            printf("Digite a quantidade de a ser depositado: ");
            scanf("%f", &depositar);

            resultadoDepo = depositoo(depositar);

            printf("Valor depositado: %f ", resultadoDepo);
            break;

        case 2:
            printf("Digite a quantidade de a ser sacado: ");
            scanf("%f", &saque);

            valor = Sacar(saque);
            printf("Valor sacado: %f", valor);
            break;
        case 3:

            printf("Digite seu nome: ");
            gets(conta.nome);

            printf("Digite a numero da conta: ");
            gets(conta.nmrConta);

            printf("Digite o tipo da conta: ");
            gets(conta.tipoconta);

            resultado = ValorTotal(saque, deposito);

            printf("Saldo atual: %f \n", resultado);
            break;
        default:
            printf("Numero invalido");
            break;
        }

    } while (op != 3);

    return 0;
}