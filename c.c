#include<stdio.h>
#include<locale.h>
main(){
   char nome [50];
setlocale(LC_ALL, "portuguese");
   printf("Digite o seu nome: ");
   scanf("%[^\n]", nome);
   printf("nome: %s", nome);

   int idade;

   printf("\n Agora digite sua idade: ");
   scanf("%d",&idade);
   printf("idade: %d", idade);

   int matricula;

   printf("\n Digite sua matricula: ");
   scanf("%d", &matricula);
   printf("Matricula: %d", matricula);
   fflush(stdin);
   
   char endereco[100];

   printf("\n Digite seu endereco: ");
   scanf("%[^\n]", endereco);
   printf("Endereco: %s", endereco);

   char curso[50];
   printf("\n Qual seu curso? ");
   fflush(stdin);
   scanf("%[^\n]", curso);
   printf("Curso: %s", curso);
   
   char periodo[20];
   printf("\n Qual o periodo do curso? noturno/matutino: ");
   fflush(stdin);
   scanf("%[^\n]", periodo);
   printf("Periodo: %s", periodo);

   char disciplinas[200];
   printf("\n Quais sao as disciplinas: ");
   fflush(stdin);
   scanf("%[^\n]", disciplinas);
   printf("Periodo: %s",disciplinas);

   int mensalidade;
   printf("\n Qual valor da mensalidade? ");
   fflush(stdin);
   scanf("\n %d", &mensalidade);
   printf("Mensalidade : %d", mensalidade);


printf("\nDADOS:");

printf("\nnome: %s", nome);
printf("\nidade: %d", idade);
printf("\nMatricula: %d", matricula);
 printf("\nEndereco: %s", endereco);
 printf("\nCurso: %s", curso);
 printf("\nPeriodo: %s", periodo);
  printf("\nPeriodo: %s",disciplinas);
  printf("\nMensalidade : %d", mensalidade);
}