/*Crie um vetor de 3 structs Aluno
Use ponteiros para preencher os dados*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main() {
    // Declara o vetor de 3 alunos
    Aluno alunos[3];
    
    // Ponteiro para percorrer o vetor
    Aluno *p = alunos;
    
    // Preenche o primeiro aluno usando ponteiro
    strcpy(p->nome, "Joao");
    p->matricula = 123;
    p->nota = 5.6;
    
    // Avança para o próximo aluno
    p++;
    
    // Preenche o segundo aluno
    strcpy(p->nome, "Maria");
    p->matricula = 124;
    p->nota = 9.9;
    
    // Avança para o próximo aluno
    p++;
    
    // Preenche o terceiro aluno
    strcpy(p->nome, "Laura");
    p->matricula = 125;
    p->nota = 7.6;
    
    // Volta o ponteiro para o início para exibir os dados
    p = alunos;
    
    printf("Dados dos alunos:\n");
    printf("-----------------\n");
    
    for(int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", p->nome);
        printf("Matricula: %d\n", p->matricula);
        printf("Nota: %.1f\n", p->nota);
        printf("\n");
        p++;
    }
    
    return 0;
}