#include <stdio.h>

int main(){
    int n,m;
    printf("\nPrimo Numero: ");
    scanf("%d", &n);
    printf("\nSecondo Numero: ");
    scanf("%d", &m);

    printf("\nSomma: %d", n + m);
    printf("\nSottrazione: %d", n - m);
    printf("\nMoltiplicazione: %d", n * m);
    printf("\nDivisione: %.2f", (float)n / (float)m);
    return 0;
}