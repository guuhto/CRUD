#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    int cod;
    char rua[100];
    char bairro[100];
    int numero[100];
    char cidade[100];
    char nome[100];
    char cpf[100];

} Cliente;

Cliente cli[100];
int total = 0;

void menu();
void cadastrar();
void deletar();
void alterar();
void exibir();
void sair();

int main() {

     menu();
    return 0;
}

 void menu() {
 int op;

do {
     printf("\n1 - Cadastrar");
     printf("\n2 - Exibir");
     printf("\n3 - Alterar ");
     printf("\n4 - Deletar");
     printf("\n5 - Sair");
     printf("\nOpcao: ");
     scanf("%i", &op);
     getchar();

     switch(op) {

        case 1:
            cadastrar();
        break;
        case 2:
            exibir();
        break;
        case 3:
            alterar();
        break;
        case 4:
            deletar();
        break;
        case 0;
            sair();
        break;
     }
        getchar();

    }while(op != 0);

 }


void cadastrar(){



    printf("Nome: ");
    scanf("%s",&cli[total].nome);
    printf("Numero: ");
    scanf("%i",&cli[total].numero);
    printf("CPF: ");
    scanf("%s",&cli[total].cpf);
    printf("Rua: ");
    scanf("%s",&cli[total].rua);
    printf("Bairro: ");
    scanf("%s",&cli[total].bairro);
    printf("Cidade: ");
    scanf("%s",&cli[total].cidade);

        total ++;
    }

void exibir() {

    for(int i = 0; i < total; i++){
    		printf("\nNome: %s ", cli[i].nome);
    		printf("\nNumero: %i ", cli[i].numero);
    		printf("\nCPF: %s ", cli[i].cpf);
    		printf("\nRua: %s ", cli[i].rua);
    		printf("\nBairro: %s ", cli[i].bairro);
    		printf("\nCidade: %s ", cli[i].cidade);


			}
}

void alterar(){

    printf("Nome: ");
    scanf("%s",&cli[total].nome);
    printf("Numero: ");
    scanf("%i",&cli[total].numero);
    printf("CPF: ");
    scanf("%s",&cli[total].cpf);
    printf("Rua: ");
    scanf("%s",&cli[total].rua);
    printf("Bairro: ");
    scanf("%s",&cli[total].bairro);
    printf("Cidade: ");
    scanf("%s",&cli[total].cidade);


    }
