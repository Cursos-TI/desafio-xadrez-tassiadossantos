#include <stdio.h>
#include <stdlib.h>

// Constantes para movimentação das peças
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

// Protótipos das funções
void moverBispo(int casas);
void moverTorre(int casas);
void moverRainha(int casas);
void moverCavalo();
void moverBispoRecursivo(int casas);
void moverTorreRecursivo(int casas);
void moverRainhaRecursivo(int casas);
void moverCavaloAvancado();

int main() {
    printf("\n=== NÍVEL NOVATO ===\n");
    
    printf("\nMovimentação do Bispo (%d casas diagonal):\n", CASAS_BISPO);
    moverBispo(CASAS_BISPO);
    
    printf("\nMovimentação da Torre (%d casas direita):\n", CASAS_TORRE);
    moverTorre(CASAS_TORRE);
    
    printf("\nMovimentação da Rainha (%d casas esquerda):\n", CASAS_RAINHA);
    moverRainha(CASAS_RAINHA);
    
    printf("\n=== NÍVEL AVENTUREIRO ===\n");
    printf("\nMovimentação do Cavalo (em L):\n");
    moverCavalo();
    
    printf("\n=== NÍVEL MESTRE ===\n");
    printf("\nMovimentação Recursiva do Bispo:\n");
    moverBispoRecursivo(CASAS_BISPO);
    
    printf("\nMovimentação Recursiva da Torre:\n");
    moverTorreRecursivo(CASAS_TORRE);
    
    printf("\nMovimentação Recursiva da Rainha:\n");
    moverRainhaRecursivo(CASAS_RAINHA);
    
    printf("\nMovimentação Avançada do Cavalo:\n");
    moverCavaloAvancado();
    
    return 0;
}

// Implementações Nível Novato
void moverBispo(int casas) {
    for(int i = 0; i < casas; i++) {
        printf("Movimento %d: Diagonal Superior Direita (Cima + Direita)\n", i + 1);
    }
}

void moverTorre(int casas) {
    int i = 0;
    while(i < casas) {
        printf("Movimento %d: Direita\n", i + 1);
        i++;
    }
}

void moverRainha(int casas) {
    int i = 0;
    do {
        printf("Movimento %d: Esquerda\n", i + 1);
        i++;
    } while(i < casas);
}

// Implementação Nível Aventureiro
void moverCavalo() {
    for(int vertical = 0; vertical < 2; vertical++) {
        for(int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Movimento vertical %d: Baixo\n", vertical + 1);
            printf("Movimento horizontal %d: Esquerda\n", horizontal + 1);
        }
    }
}

// Implementações Nível Mestre
void moverBispoRecursivo(int casas) {
    if(casas <= 0) return;
    printf("Movimento Recursivo: Diagonal Superior Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverTorreRecursivo(int casas) {
    if(casas <= 0) return;
    printf("Movimento Recursivo: Direita\n");
    moverTorreRecursivo(casas - 1);
}

void moverRainhaRecursivo(int casas) {
    if(casas <= 0) return;
    printf("Movimento Recursivo: Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

void moverCavaloAvancado() {
    int movimentos = 0;
    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            printf("Primeiro movimento: Cima\n");
            continue;
        }
        if(i == 1) {
            printf("Segundo movimento: Cima\n");
            movimentos++;
        }
        if(movimentos == 1) {
            printf("Terceiro movimento: Direita\n");
            break;
        }
    }
}
