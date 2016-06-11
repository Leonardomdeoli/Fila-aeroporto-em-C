#include<stdbool.h>
#include<stdio.h>
#include "menu.h"
#include <locale.h>


void iniciarPrograma(){
    setlocale(LC_ALL,"");
    system("color F0");
    int opcao1 = menu2();
    while(opcao1!=0){
        switch(opcao1){
             case 1:{
                Primeiromenu();
                system("cls");
                break;
             }
             case 2:{
                apresentacao();
                break;
             }
             case 3:{
                exit(0);
                break;
             }
             default:{
                printf("                  Op��o inv�lida escolha outra");
                printf("\n\n                    Aperte enter continuar\n");
                getch();
                opcao1=menu2();
                system("cls");
             }


        }

     }



}



int menu2(){
    int opcao1=0;
    system("cls");
    printf("\n  Escolha um n�mero do menu e aperte enter\n");
    printf("\n    1: Ver Trabalho");
    printf("\n    2: Sobre ");
    printf("\n    3: Sair ");
    printf("\n\n    Op��o escolhida: ");
    scanf("%d",&opcao1);
    return opcao1;
}


int Primeiromenu(){
     //Criacao da Fila
    Fila *f = cria();
    int opcao = menu();

  while(opcao!=0){
        switch(opcao){
             case 1:{
            adicionarAviao(f);
            opcao=menu();
            system("cls");
            break;
            }
             case 2:{
            Autorizardecolagem(f);
            opcao=menu();
            system("cls");
            break;
            }
             case 3:{
            QDTavioes(f);
            opcao=menu();
            system("cls");
            break;
            }
             case 4:{
            ListarAvioes(f);
            opcao=menu();
            system("cls");
            break;
            }
             case 5:{
            primeiroAviao(f);
            opcao=menu();
            system("cls");
            break;
            }
            case 6:{
            iniciarPrograma();
            break;
            }
            case 7:{
            exit(0);
            break;
            }
            default:{
            printf("                  Op��o inv�lida escolha outra");
            printf("\n\n                    Aperte enter continuar\n");
            getch();
            opcao=menu();
            system("cls");
            }


        }

     }


}



int menu(){
    int opcao=0;
    system("cls");
    printf("\n  Escolha um n�mero do menu e aperte enter\n");
    printf("\n    1: Adicionar avi�o na fila ");
    printf("\n    2: Autorizar decolagem ");
    printf("\n    3: Listar quantidade de avi�es esperando para decolar ");
    printf("\n    4: Listar todos os avi�es ");
    printf("\n    5: Listar caracter�stica do primeiro avi�o ");
    printf("\n    6: Voltar no menu");
    printf("\n    7: Sair ");
    printf("\n\n    Opcao escolhida: ");
    scanf("%d",&opcao);
return opcao;
}


 void apresentacao(){
        system("cls");
        printf("******************************************************************************\n");

        printf("\n\n                  Trabalho Desenvolvido pelos Alunos ");
        printf("\n\n            Leonardo Mendes");
        printf("\n\n                                  e");
        printf("\n\n            Cristiano Lopes");
        printf("\n\n                  Alunos do Curso: Sistemas de Informa��o");
        printf("\n\n              Disciplina: Desenvolvimento de Algoritmos ");
               printf("\n\n******************************************************************************");
        printf("\n\n                        Aperte enter voltar a menu\n");
        getch();
        system("cls");
        main();
}
void adicionarAviao(Fila *f){
    int i,p,c;
    char n[30],o[30],d[30],m[30];
    system("cls");
    printf("******************************************************************************\n\n");

    printf("    Digite o ID do avi�o: ");
    scanf("%d",&i);

    printf("\n    Digite o Modelo do avi�o: ");
    scanf(" %[^\n]",&m);

    printf("\n    Digite o Nome do avi�o: ");
    scanf(" %[^\n]",&n);

    printf("\n    Digite a cidade de Origem do avi�o: ");
    scanf(" %[^\n]",&o);

    printf("\n    Digite a cidade de Destino do avi�o: ");
    scanf(" %[^\n]",&d);

    printf("\n    Digite a capacidade m�xima de poltronas do avi�o: ");
    scanf("%d",&c);

    printf("\n    Digite o n�mero de passageiro que ir� embarcar no avi�o: ");
    scanf("%d",&p);

        if( c < p ){
            printf("\n    Quantidade de passageiros excedida, capacidade m�xima � de : %d",c);
            printf("\n\n    Digite um novo n�mero de passageiro: ");
            scanf("%d",&p);
        }
    adicionar(f,i,n,o,d,p,c,m);

    printf("\n\n******************************************************************************");
    printf("\n\n                        Aperte enter continuar\n");
    getch();

}
void Autorizardecolagem(Fila *f){
    system("cls");
    printf("******************************************************************************");
    decolagem(f);
    printf("\n\n******************************************************************************");
    printf("\n\n                     Aperte enter continuar\n");
    getch();
}

void QDTavioes(Fila *f){
   system("cls");
   printf("******************************************************************************");
   if(EsperandoDecolar(f)>1){
        printf("\n\n        Est�o esperando para decolar %d avi�o\n",EsperandoDecolar(f));
   }
   else if(EsperandoDecolar(f)==1){
        printf("\n\n        H�  somente %d  avi�o esperando para decolar\n",EsperandoDecolar(f));
   }
   else{
        printf("\n\n                    N�o a avi�es no aeroporto");
    }
   printf("\n\n******************************************************************************");
   printf("\n\n                     Aperte enter continuar\n");
   getch();

}
void ListarAvioes(Fila *f){
    system("cls");
    printf("******************************************************************************\n\n");
    ListaEspera(f);
    printf("\n\n******************************************************************************");
    printf("\n\n                     Aperte enter continuar\n");
    getch();
}
void primeiroAviao(Fila *f){
    system("cls");
    printf("******************************************************************************\n\n");
    mostrarAviao(f);
    printf("\n\n******************************************************************************");
    printf("\n\n                     Aperte enter continuar\n");
    getch();
}
