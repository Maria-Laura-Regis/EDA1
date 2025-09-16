#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    int total_caracteres;
    int espacos;
    int tabs;
    int newlines;
    fp = fopen("arquvo.txt", "r");
    if (fp == NULL){
        printf("Archive not read\n");
        return 1;
    }

    while (ch = fgetc(fp) != EOF)
    {
        total_caracteres++;

        if (ch == ' '){
            espacos++;
        }

        if (ch == '\n'){
            newlines++;
        }

        if (ch == '\t'){
            tabs++;
        }
    }

    fclose(fp);

    printf("Total de caracteres: %d\n", total_caracteres);
    printf("Total de espaços: %d\n", espacos);
    printf("Total de newlines: %d\n", newlines);
    printf("Total de tabs: %d\n", tabs);

}