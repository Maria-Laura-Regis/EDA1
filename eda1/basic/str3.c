/*Crie a struct Aluno
Atribua valores a uma vari´avel
Use ponteiros para acessar e imprimir os dados*/



struct Aluno {
char nome[50];
int matricula;
float nota;
};

int main(){
    struct Aluno al;
    strcpy(al.nome, "Matheus");
    strcpy(al.matricula, "232005361");
    strcpy(al.nota, "7.5");

   printf( "Aluno1 nome : %s\n", al.nome);
   printf( "Aluno1 matricula: %s\n", al.matricula);
   printf( "Aluno1 nota: %s\n", al.nota);

}

