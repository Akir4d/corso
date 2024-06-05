#include <stdio.h>

int somma(int a, int b){
    int risultato = 0;
    risultato = a + b;
    return risultato;
}

int main(){
    int n = 0, m = 0, ris;
    const float PI = 3.14159;
    printf("\ninserisci il primo numero: ");
    scanf("%d", &n);
    printf("\ninserisci il secondo numero: ");
    scanf("%d", &m);
    ris = somma(n, m);
    printf("\nla somma e': %d\n\n", ris);
    float risult = ((float)2 * PI) * (float)ris;
    printf("\n 2x%fr=%f\n", PI, risult);
    return 0;
}