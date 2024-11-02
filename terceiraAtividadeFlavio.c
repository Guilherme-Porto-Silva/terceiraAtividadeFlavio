#include <stdlib.h>
#include <stdio.h>

typedef struct void criadorDePilha(void){
    int *topo = malloc(sizeof(int)), *pilha = NULL;
    *topo = -1;
}pilha;

typedef struct void empilhador(int entrandoAgora){
    pilha.topo++;
    pilha.pilha -> pilha.topo = entrandoAgora;
    }
}emp;

typedef struct int desempilhador(void){
    if(pilha.topo == -1){
     printf("\nEssa pilha estah vazia.\n");   
        return 0;
    }
    else{
    int serahDevolvido = pilha.pilha -> pilha.topo;
    free(&pilha.topo);
    pilha.topo--;
    return serahDevolvido;
    }
}desemp;

typedef struct void destruidorDePilha(pilha serahDestruida){
    
}dp;

typedef struct void criadorDeFila(void){
    int *inicio = malloc(sizeof(int)), *fim = malloc(sizeof(int));
    *inicio = 0;
    *fim = 0;
}fila;

typedef struct void enfileirador(int entrandoAgora){
    fila.fim++;
    *fila.fim = entrandoAgora;
}enfi;

typedef struct int desenfileirador(void){
    if(fila.inicio == fila.fim){
    printf("\nEssa fila estah vazia.\n");
    return 0;
  }
    else{
    int serahDevolvido = fila.inicio;
    fila.inicio++;
    return serahDevolvido;
    }
}desenfi;

typedef struct void destruidorDeFila(fila serahDestruida){
    
}df;

int main(void)
{
int *extraido = malloc(sizeof(int)), *desejo = malloc(sizeof(int));
    printf("Listarei as coisas que este programa faz e os respectivos numeros que teras que imprimir para usar cada uma delas.\n\nCriar uma pilha: 1\n\nCriar uma fila: 2\n\nDestruir uma pilha: 3\n\nDestruir uma fila: 4\n\nPreencher uma pilha: 5\n\nPreencher uma fila: 6\n\nExtrair de uma pilha: 7\n\nExtrair de uma fila: 8\n\nA impressao de qualquer numero nao presente nessa lista significarah que o programa jah terminou de ser usado.\n");
    scanf("%i",*desejo);
    if(*desejo == 1){
        pilha *p;
    }
    else if(*desejo == 2){
        fila *f;
    }
    else if(*desejo == 3){
        free(p);
    }
    else if(*desejo == 4){
        free(f);
    }
    else if(*desejo == 5){
        printf("\nQue numero serah posto no topo da pilha?");
        scanf("%i",*desejo);
        *p = emp(*desejo);
    }
    else if(*desejo == 6){
        printf("\nQue numero serah posto no fim da fila?");
        scanf("%i",*desejo);
        *f = enfi(*desejo);
    }
    else if(*desejo == 7){
        *extraido = desemp(void);
        printf("\nDesempilhei %d, que poderah ser manipulado por meio do ponteiro 'extraido'\n",*extraido);
    }
    else if(*desejo == 8){
        *extraido = desenfi(void);
        printf("\nDesenfileirei %d, que poderah ser manipulado por meio do ponteiro 'extraido'\n",*extraido);
    }
    else printf("\nMuito obrigado por escolher os servicos de Guigui-chan, volte sempre! =)");
    free(desejo);
    return 0;
}