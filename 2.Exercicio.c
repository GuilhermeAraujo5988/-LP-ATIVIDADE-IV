#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_do_Aluno
{
    char nome[200];
    char nascimento[200];
    float media;
    float nota1;
    float nota2;
};

float calcularMedia(struct dados_do_Aluno aluno)
{
    return (aluno.nota1 + aluno.nota2) / 2;
}

void AprovadoOUreprovado(struct dados_do_Aluno aluno)
{
    if (aluno.media >= 7)
    {
        printf("Aprovado! \n", aluno.nome);
    }
    else
    {
        printf("Reprovado! \n", aluno.nome);
    }
}

int main()
{
    struct dados_do_Aluno alunos[5];
    setlocale(LC_ALL, "portuguese");
    int i = 0; 

    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);

        printf("Digite o nome do %d° aluno: ", i + 1);
        gets(alunos[i].nome);

        printf("Digite a data de nascimento do %d aluno: ", i + 1);
        gets(alunos[i].nascimento);

        printf("Digite a 1ª nota do %d° aluno: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a 2ª nota do %d° aluno: ", i + 1);
        scanf("%f", &alunos[i].nota2);
        system("cls || clear");
    }

        for (i = 0; i < 5; i++)
        {
            printf("Nome do %d° aluno: %s \n", i + 1, alunos[i].nome);
            printf("Data de nascimento do %d° aluno: %s \n", i + 1, alunos[i].nascimento);
            alunos[i].media = calcularMedia(alunos[i]);
            AprovadoOUreprovado(alunos[i]);
            printf("\n\n");
        }

    return 0;
}