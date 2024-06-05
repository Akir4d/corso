#include <stdio.h>

int somma(int a, int b){
    int risultato = 0;
    risultato = a + b;
    return risultato;
}

int main(){
    int n;
    int m;
    printf("\ninserisci il primo numero: ");
    scanf("%d", &n);
    printf("\ninserisci il secondo numero: ");
    scanf("%d", &m);

    printf("\nla somma e': %d\n\n", somma(n, m));

    return 0;
}