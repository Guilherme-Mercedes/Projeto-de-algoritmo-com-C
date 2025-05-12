#include <stdio.h>

float recebimento[1000][2];
float despesas[1000][2];

int numRecebimento = 0, numDespesas = 0, numOperacao = 0;


void addRecebimento()
{
    float valor;

    printf("Entre o valor revebido: \n");
    scanf("%f", &valor);

    recebimento[numRecebimento][0] = numOperacao;
    recebimento[numRecebimento][1] = valor;

    printf("Voce recebeu %.2f reais na operação de numero %.0f", recebimento[numRecebimento][1], recebimento[numRecebimento][0]);

    numRecebimento++;
    numOperacao++;

    printf("\nOperação conlcuida com sucesso.\n");
}

void addDespesas()
{
    float valor;

    printf("Entre o valor pago: \n");
    scanf("%f", &valor);

    despesas[numDespesas][0] = numOperacao;
    despesas[numDespesas][1] = valor;

    printf("Voce pagou %.2f reais na operação de numero %.0f", despesas[numDespesas][1], despesas[numDespesas][0]);

    numDespesas++;
    numOperacao++;

    printf("\nOperação conlcuida com sucesso.\n");
}

void saldo()
{
    int i;
    float saldo = 0;

    for(i = 0; i < numRecebimento; i++)
    {
        saldo = saldo + recebimento[i][1];
    }

    for(i = 0; i < numDespesas; i++)
    {
        saldo = saldo - despesas[i][1];
    }

    printf("\nVoce possui um saldo de %.2f reais.\n", saldo);
}

void exibirExtrato()
{
    int i, j;
    float saldo = 0;
    float extrato[2000];

    for(i = 0; i < numRecebimento; i++)
    {
        extrato[i] = recebimento[i][1];
        saldo = saldo + recebimento[i][1];
    }

    for(j = 0; j < numDespesas; j++)
    {
        extrato[j + i] = 0 - despesas[j][1];
        saldo = saldo - despesas[j][1];
    }

    for(j = 0; j < numOperacao; j++)
    {
        extrato[j];
        printf("\nTransação numero %d no valor de %.2f reais.\n", j+1, extrato[j]);
    }

    printf("\nVoce possui um saldo de %.2f reais.\n", saldo);
}

void calculoIrpf()
{
    float salario, recolhimento;
    salario = 0;
    int i;

    for(i = 0; i < numRecebimento; i++)
    {
        salario = salario + recebimento[i][1];
    }

    if(salario <= 1903.98)
    {
        printf("\nSeu salario foi de %f.", salario);
        printf("\nVoce esta isento do recolhimento.");
    }else if (salario > 1903.98 && salario <= 2826.65)
    {
        recolhimento = (salario*7.5/100) - 142.80;
        printf("\nSeu salario foi de %.2f.", salario);
        printf("\nVoce devera recolher %.2f reais", recolhimento);
    }else if (salario > 2826.65 && salario <= 3751.05)
    {
        recolhimento = (salario*15/100) - 354.80;
        printf("\nSeu salario foi de %.2f.", salario);
        printf("\nVoce devera recolher %.2f reais", recolhimento);
    }else if (salario > 3751.05 && salario <= 4664.68)
    {
        recolhimento = (salario*22.5/100) - 636.13;
        printf("\nSeu salario foi de %.2f.", salario);
        printf("\nVoce devera recolher %.2f reais", recolhimento);
    }else
    {
        recolhimento = (salario*27.5/100) - 869.36;
        printf("\nSeu salario foi de %.2f.", salario);
        printf("\nVoce devera recolher %.2f reais", recolhimento);
    }
}

