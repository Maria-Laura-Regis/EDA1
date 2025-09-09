#include <stdio.h>


int main() {
    int  var;
    int *ptr;
    ptr = &var;
    printf("Valor da variavel: %d\n", var);
    printf("Endereco da variavel: %p\n", &var);
    printf("Valor do ponteiro: %p\n ", &ptr);
    printf("Conteudo do ponteiro: %d\n", *ptr);


    
    return 0;
}