#include <stdio.h>

int main() {

    int primo_numero;
    int secondo_numero;
    //int somma;

    printf("Inserisci un numero:\n");
    scanf("%d", &primo_numero);
    
    printf("Inserisci il secondo numero:\n");
    scanf("%d", &secondo_numero);

    //somma = primo_numero + secondo_numero;
    //printf("La somma dei numeri inseriti e': %d\n", somma);

    printf("Somma: %d\n", primo_numero + secondo_numero);
    printf("Sottrazione: %d\n", primo_numero - secondo_numero);
    printf("Moltiplicazione: %d\n", primo_numero * secondo_numero);
    
    printf("Divisione: %d\n", primo_numero / secondo_numero);
    printf("Modulo: %d\n", primo_numero % secondo_numero);
    primo_numero++;
    secondo_numero--;
    printf("Incremento primo numero: %d\n", primo_numero);
    printf("Decremento secondo numero: %d\n", secondo_numero);
    return 0;
}

