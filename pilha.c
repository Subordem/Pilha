//João Gabriel
#include<stdlib.h>
#include<stdio.h>
#define TAMPILHA 10

int pilha[TAMPILHA]={0,0,0,0,0,0,0,0,0,0};
int topo=0;



void lista_elementos(){
    printf("\n===================Pilha atual====================\n");
    for (int i = 0; i < TAMPILHA; i++)
    {
        printf("-");
        printf("|%d|",pilha[i]);
        printf("-");
    }
    printf("\nTopo: %d",topo);
    printf("\n\n");

}


void push(){
int val=0;
printf("\nInforme o valor: ");
scanf("%d",&val);
if (topo<TAMPILHA)
{
    pilha[topo]=val;
    topo++;
    lista_elementos();
    
}
else{
    printf("\nPilha cheia...");
}

}
void pop(){
if (topo>=0)
{
    pilha[topo-1]=0;
    topo--;
    lista_elementos();
}
else{
    printf("\nPilha vazia...");
}

}
void clear(){
    for (int i = 0; i < TAMPILHA; i++)
    {
        pilha[i]=0;
    }
    topo=0;
}



int main(){

int num=0;

do
{
    printf("\nSelecione a opcao\n\n");
    printf("\n[1] - inserir(push)");
    printf("\n[2] - remover(pop)");
    printf("\n[3] - listar");
    printf("\n[4] - limpar");
    printf("\n[-1] - sair\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        lista_elementos();
        break;
        case 4:
        clear();
        break;
        case -1:
        printf("\n=========obrigado por usar o programa===========");
        return 0;
        break;
    default:
    printf("\nOpcao invalida ze ruela");
        break;
    }
} while (num!=-1);



    return 0;
}