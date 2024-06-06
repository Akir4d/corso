#include <stdio.h>

unsigned long long fattoriale(int numero){
   if (numero < 0) {
     printf("\nIl fattoriale di un numero negativo non esiste!\n");
     return 0;
   } else {
        unsigned long long fattoriale = 1;
        for (int i = 1; i <= numero; i++) fattoriale *= i;
        return fattoriale;
   }
} 

int main (){
    int inserisci;
    printf("\nInserisci un numero per calcolare il suo fattoriale: ");
    scanf("%d", &inserisci);

    printf("\nIl fattoriale di %d e' %llu", inserisci, fattoriale(inserisci));
}