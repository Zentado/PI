#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main() {
    float valor[100], soma=0;//resolver porblema de valor proposto caso usuario digite definir limite, logica imperfeita e incabada 
    char produto[100][50];
    int i, u;

    printf("este é seu carinho de compras, adicione seu produtos e seus respetivos valores, caso queira para de adicionar itens no carrinho basta digitar 'finalizar'\n");

    
    for (i = 0; i < 100; i++) {
        
        printf("Digite o nome do produto %d: ", i + 1);
        fgets(produto[i], sizeof(produto[i]), stdin); 
        produto[i][strcspn(produto[i], "\n")] = 0;

        if (strcmp(produto[i], "finalizar") == 0) {
            printf("Finalizando o programa...\n");
            break;
        }

        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &valor[i]); 

        soma =+valor[i];
        
        getchar();
    }

    printf("\nProdutos e seus respectivos valores:\n");
    for (u = 0; u < i; u++) {
        soma += valor[u];
        printf("Produto: %s, Valor: %.2f\n", produto[u], valor[u]);
    }
    printf("\t \n Valor total da compra: R$%2.f\n", soma);

    return 0;
}
