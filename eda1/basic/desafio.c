/* Complete o c´odigo:
Atribua valores e imprima usando ->*/

#include <stdio.h>

typedef struct {
    char nome[20];
    float preco;
} Produto;

Produto *p;


int main(){
    Produto l1 = {"Sabao", 5.0};
    Produto *ptr = &l1;
    printf("%s - %.2f", ptr->nome, ptr->preco);
}