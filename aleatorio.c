#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Array de strings
    const char *nomes[] = {"couto", "ricardo", "Raisa", "liriel", "Bruno", "Angelo", "Taina", "Sofia", "Well", "Gabriel"};
    int total_nomes = sizeof(nomes) / sizeof(nomes[0]); // Número de elementos no array

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera um índice aleatório
    int indice = rand() % total_nomes;

    // Imprime o nome selecionado
    printf("Nome selecionado: %s\n", nomes[indice]);

    return 0;
}
