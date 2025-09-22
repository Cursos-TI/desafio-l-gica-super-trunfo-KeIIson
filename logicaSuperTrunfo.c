#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int forca;
    int velocidade;
    int inteligencia;
    int densidade_demografica;
} Carta;

void exibirOpcoes(int atributoEscolhido) {
    printf("Escolha um atributo (diferente do primeiro, se já escolhido):\n");
    if (atributoEscolhido != 1) {
        printf("1 - Força\n");
    }
    if (atributoEscolhido != 2) {
        printf("2 - Velocidade\n");
    }
    if (atributoEscolhido != 3) {
        printf("3 - Inteligência\n");
    }
    if (atributoEscolhido != 4) {
        printf("4 - Densidade Demográfica\n");
    }
}

int obterValorAtributo(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.forca;
        case 2: return c.velocidade;
        case 3: return c.inteligencia;
        case 4: return c.densidade_demografica;
        default: return 0;
    }
}