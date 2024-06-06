#include <stdio.h>

void leggivettore (int *ptr){
    for (int i=0; i<10;i++){
        printf("\nElemento %d del vettore: %d", i, *ptr);
        printf("\nmemoria 0x%x=%d", ptr, *ptr);
        ptr++;
    }
    printf("\nFINE!\n");
}

void scrivivettore (int *ptr) {
    for (int i=0; i<10;i++){
        printf ("\ninserisci un numero: ");
        scanf("%d", ptr);
        
        //n[2]
        ptr++;
    }
}

int main() {
    int n[10] = {0};
    int *n_ptr;
    n_ptr=&n[0];
    //scrivivettore(&n[0]);
    
    scrivivettore (n_ptr);
    leggivettore(n_ptr);
}