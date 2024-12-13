#include <stdio.h>

int somma(int a, int b){
    int c = a + b;
    printf("\n'a' occupa la zona di memoria 0x%x=%d", &a, a);
    printf("\n'b' occupa la zona di memoria 0x%x=%d", &b, b);
    printf("\n'c' occupa la zona di memoria 0x%x=%d", &c, c);
    return c;
}

int main(){
    int num = 3, den = 8;
    printf("\n'num' occupa la zona di memoria 0x%x=%d", &num, num);
    printf("\n'den' occupa la zona di memoria 0x%x=%d", &den, den);
    printf("\nLa somma e': %d", somma(num, den));
    return 0;
}