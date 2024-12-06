#include <stdio.h>

int main(){
    int n,m,differenza;
    printf("\nPrimo Numero: ");
    scanf("%d", &m);
    printf("\nSecondo Numero: ");
    scanf("%d", &n);
    differenza = m - n;
    if (differenza == 0){
        printf("\nLa differenza %d - %d e' zero", m, n);
    } else if (differenza < 0){
        printf("\nLa differenza %d - %d e' negativa", m, n);
    } else printf("\nLa differenza %d - %d e' positiva", m, n);
    return 0;
}