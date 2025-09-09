/*Declare uma struct Livro com os campos:
titulo (string)
autor (string)
ano (inteiro)
Preencha os campos de uma vari´avel livro1 e imprima os dados*/




#include <stdio.h>

struct livro

    {
        char titulo[50];
        char autor[50];
        int ano;

        
    };
    

int main(){
    struct livro livro1;
    struct livro livro2;

    strcpy(livro1.titulo, "Turma da monica");
    strcpy(livro1.autor, "Mauricio de sousa");
    strcpy(livro1.ano, "2000");

    strcpy(livro2.titulo, "Turma da monica");
    strcpy(livro2.autor, "Mauricio de sousa");
    strcpy(livro2.ano, "2000");

       /* mostrando as informações do livro 1 */
   printf( "Livro 1 titulo : %s\n", livro1.titulo);
   printf( "Livro 1 autor : %s\n", livro1.autor);
   printf( "Livro 1 ano : %d\n", livro1.ano);

   /* mostrando as informações do livro 2 */
   printf( "Livro 2 titulo : %s\n", livro2.titulo);
   printf( "Livro 2 autor : %s\n", livro2.autor);
   printf( "Livro 2 ano : %d\n", livro2.ano);

   return 0;
}

