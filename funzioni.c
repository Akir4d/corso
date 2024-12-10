#include <stdio.h>

int somma(int a, int b){
    return a + b;
}

void messaggio(int d){
    printf("\nCiao! Gioco della somma %d", d);
}

int main(){
    messaggio(1);
    printf("\nsomma %d", somma(2,3));
    //return 1;
    messaggio(2);
    return 0;
}