#include <stdio.h>

int main(){
    int f = 0;
    do{
        printf("\nDammi un numero maggiore di zero o mi arrendo: ");
        scanf("%d", &f);
        printf("\ndebug, indirizzo memoria 0x%x = %d", &f, f);
    } while(f > 0);
}