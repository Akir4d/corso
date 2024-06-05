#include <stdio.h>

int main(){

    float numeratore;
    float denominatore;
    float divisione;

    printf("Inserisci numeratore: ");
    scanf("%f", &numeratore);

    printf("\nInserisci denominatore: ");
    scanf("%f", &denominatore);

    if( denominatore != 0) {
        divisione = numeratore / denominatore;
        printf("\nIl risultato e':%f", divisione);
    } else {
        printf("\nNon posso dividere per zero\n");
    }
    
    if (denominatore > 5) printf("\nil denominatore '%f' e' maggiore di 5\n", denominatore);
    if (denominatore == numeratore) printf("\nI valori sono uguali\n");
    if (denominatore != numeratore) printf("\nI valori non sono uguali\n");
    if (denominatore < numeratore) printf("\nIl denominatore e' inferiore a numeratore\n");
    if (denominatore <= numeratore) printf("\nIl denominatore e' inferiore o uguale a numeratore\n");
    if (denominatore >= numeratore) printf("\nIl denominatore e' maggiore o uguale a numeratore\n");
    if ((denominatore == numeratore) && (numeratore == 5)) printf("\ne' tutto 5");
    if ((denominatore == numeratore) || (numeratore == 5)) printf("\nsono uguali o numeratore = 5");
    if (!0) printf("\nsara' vero");
    if (!1) printf("\nsara' falso");
    return 0;


}