#include <stdio.h>
#include "recebimento.c"

int main() {
    int opcao;
    do {
        printf("\nEscolha uma opcao:\n");
        printf("1. Adicionar recebimento\n");
        printf("2. Adicionar despesas\n");
        printf("3. Exibir saldo\n");
        printf("4. Exibir extrato\n");
        printf("5. Calcular o imposto de renda\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                addRecebimento();
                break;
            case 2:
                addDespesas();
                break;
            case 3:
                saldo();
                break;
            case 4:
                exibirExtrato();
                break;
            case 5:
                calculoIrpf();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}