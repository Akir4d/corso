#include <stdio.h>
/*
* Array: dichiarare e inizializzare un array di numeri interi 
* e scrivere un programma per trovare la media degli elementi nell'array.
*/
int main(){
    int numeri[] = {11, 10, 20, 30, 40, 50, 55};
    /*
    * sizeof restituisce la grandezza in bit
    * quindi qui sarebbe da leggere
    * int n = bit totali array / bit singolo elemento array
    * così ho il numero degli elementi
    */
    int n = sizeof(numeri) / sizeof(int);
    int somma = 0;
    float media;
    for (int i=0; i < n; i++){
        somma += numeri[i];
    }
    media = (float)somma / n;
    printf("La media dei è: %.2f", media);
    return 0;
}