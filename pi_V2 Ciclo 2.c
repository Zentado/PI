#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int id;
    char nome[50];
    float preco;
} Servico;

void listarServicos(Servico servicos[], int total) {
    printf("Servicos disponiveis:\n");
    printf("Compre apenas 1 servico de cada vez\n");
    for (int i = 0; i < total; i++) {
        printf("%d - %s: R$ %.2f\n", servicos[i].id, servicos[i].nome, servicos[i].preco);
    }
}

float calcularTotal(float preco) {
    float taxa = 0.2; 
    return preco + (preco * taxa);
}

void finalizarCompra(Servico servico) {
    float total = calcularTotal(servico.preco);
    printf("Confirmando compra do servico: %s\n", servico.nome);
    printf("Preco final com taxa: R$ %.2f\n", total);
    printf("Pagamento realizado com sucesso!\n");
    printf("Compra finalizada.\n\n");
}

int main() {
    Servico servicos[] = {
        {1, "Servico de Marcenaria", 100.00},
        {2, "Servico de Piso", 150.00},
        {3, "Servico de Forro", 200.00}
    };
    int totalServicos = sizeof(servicos) / sizeof(servicos[0]);

    int opcao;
    int idServico;

    printf("Aplicativo de Compra de Servicos\n");

    while (1) {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Listar servicos\n");
        printf("2 - Comprar servico\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo do sistema...\n");
            break;
        } else if (opcao == 1) {
            listarServicos(servicos, totalServicos);
        } else if (opcao == 2) {
            printf("Digite o ID do servico que deseja comprar: ");
            scanf("%d", &idServico);

            int encontrado = 0;
            for (int i = 0; i < totalServicos; i++) {
                if (servicos[i].id == idServico) {
                    finalizarCompra(servicos[i]);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("Servico nao encontrado! Tente novamente.\n");
            }
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }

    printf("Sistema finalizado.\n");
    return 0;
}
