/*Crie um ponteiro para a struct Livro
Use -> para acessar e imprimir os campos*/


#include <stdio.h>

typedef struct

    {
        char titulo[50];
        char autor[50];
        int ano;
                
    }Livro;


int main(){
    Livro l1 = {"Turma da monica", "Mauricio de sousa", 2000};
    Livro *ptr = &l1;
    printf("%s - %.2f", ptr->titulo, ptr->autor, ptr->ano);
}

