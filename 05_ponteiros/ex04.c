#include <stdio.h>

void reajustar(float *preco, float reajuste);

void main (){
    float preco, reajuste;
    printf("Informe o preco: ");
    scanf("%f", &preco);
    printf("Informe o reajuste: ");
    scanf("%f", &reajuste);
    reajustar(&preco, reajuste);
    printf("\n");
    printf("O preco reajustado: %.2f\n", preco);
    printf("\n");
    printf("Informe o novo reajuste: ");
    scanf("%f", &reajuste);    
    reajustar(&preco, reajuste);
    printf("\n");
    printf("O preco reajustado: %.2f\n", preco);    
}

void reajustar(float *preco, float reajuste){
    *preco = *preco + *preco * reajuste;
}

