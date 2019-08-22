#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 100000

void executarOrdenado() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    int aux = 0; //varivel para ser usada na troca
    int eleito, menor, posicaoDoMenor;
    int qtd_Comparacoes = 0, qtd_Trocas = 0;
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = i;
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Ordena vetor pelo metodo da da selecao
    for (int i = 0; i < TAMANHO - 2; i++) {// 0 -> penultina posicao
        eleito = vetor[i];
        menor = vetor[i + 1];
        posicaoDoMenor = i + 1;
        qtd_Comparacoes++;
        for (int j = i + 1; j < TAMANHO; j++) {
            if (vetor[j] < menor) {
                menor = vetor[j];
                posicaoDoMenor = j;
                qtd_Trocas++;
            }
        }
        if (menor < eleito) {
            vetor[i] = vetor[posicaoDoMenor];
            vetor[posicaoDoMenor] = eleito;
        }
    }
    //Mostra valores do vetor ordenado   
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("\n\n-------- Ordenado --------\n\n");
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    printf("Quantidade de compara��es: %ld\n", qtd_Comparacoes);
    printf("Quantidade de trocas: %ld\n", qtd_Trocas);
    printf("\n\n---------------------------\n\n");
}

void executarAleatorio() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    int aux = 0; //varivel para ser usada na troca
    int eleito, menor, posicaoDoMenor;
    int qtd_Comparacoes = 0, qtd_Trocas = 0;
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 10; //Atribui um inteiro aleatorio entre 0 e 9
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Ordena vetor pelo metodo da da selecao
    for (int i = 0; i < TAMANHO - 2; i++) {// 0 -> penultina posicao
        eleito = vetor[i];
        menor = vetor[i + 1];
        posicaoDoMenor = i + 1;
        qtd_Comparacoes++;
        for (int j = i + 1; j < TAMANHO; j++) {
            if (vetor[j] < menor) {
                menor = vetor[j];
                posicaoDoMenor = j;
                qtd_Trocas++;
            }
        }
        if (menor < eleito) {
            vetor[i] = vetor[posicaoDoMenor];
            vetor[posicaoDoMenor] = eleito;
        }
    }
    //Mostra valores do vetor ordenado   
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("\n\n-------- Aleat�rio --------\n\n");
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    printf("Quantidade de compara��es: %ld\n", qtd_Comparacoes);
    printf("Quantidade de trocas: %ld\n", qtd_Trocas);
    printf("\n\n---------------------------\n\n");
}

void executarDecrescente() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    int aux = 0; //varivel para ser usada na troca
    int eleito, menor, posicaoDoMenor;
    int qtd_Comparacoes = 0, qtd_Trocas = 0;
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    int count = 0;
    for (int i = TAMANHO - 1; i >= 0; i--) {
        vetor[count] = i;
        count++;
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Ordena vetor pelo metodo da da selecao
    for (int i = 0; i < TAMANHO - 2; i++) {// 0 -> penultina posicao
        eleito = vetor[i];
        menor = vetor[i + 1];
        posicaoDoMenor = i + 1;
        qtd_Comparacoes++;
        for (int j = i + 1; j < TAMANHO; j++) {
            if (vetor[j] < menor) {
                menor = vetor[j];
                posicaoDoMenor = j;
                qtd_Trocas++;
            }
        }
        if (menor < eleito) {
            vetor[i] = vetor[posicaoDoMenor];
            vetor[posicaoDoMenor] = eleito;
        }
    }
    //Mostra valores do vetor ordenado   
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("\n\n-------- Decrescente --------\n\n");
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    printf("Quantidade de compara��es: %ld\n", qtd_Comparacoes);
    printf("Quantidade de trocas: %ld\n", qtd_Trocas);
    printf("\n\n-----------------------------\n\n");
}

void main() {
    int escolha = 1;
    while (escolha != 0) {
        printf("\nDigite a sua escolha:\n(1) Ordenado\n(2) Aleat�rio\n(3) Decrescente\n(4) Parar programa\n=> ");
        scanf("%d", &escolha);
        printf("\n");
        switch (escolha) {
            case 1:
                executarOrdenado();
                break;
            case 2:
                executarAleatorio();
                break;
            case 3:
                executarDecrescente();
                break;
            default:
                escolha = 0;
                break;
        }
    }
}