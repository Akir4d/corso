#include <stdio.h>

int main()
{
    int num, den;
    float div;
    printf("\nInserisci numeratore: ");
    scanf("%d", &num);
    printf("\nInserisci denominatore: ");
    scanf("%d", &den);
    if (den != 0){
        div = (float)num/(float)den;
        printf("\n Il risultato e' %f", div);
    } else {
        printf("\nIl denominatore non puo' essere zero");
    }
    return 0;
}