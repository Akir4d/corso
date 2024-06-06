#include <stdio.h>

/*
* Cicli: scrivi programmi usando i cicli for e while per stampare 
* i numeri da 1 a 10 e per calcolare la somma dei numeri da 1 a 100.
*/

int main(){
    for (int i=1; i <=10; i++){
        printf("\n%d", i);
    }
    int x = 1, r = 0;

    while(x <= 100){
        r = r + x;
        x++;
    }
    printf("\n Somma 1-100=%d", r);
    return 0;
}