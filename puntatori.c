#include <stdio.h>

int main()
{
    // int s = 5678;
    // int *i = &s;
    // printf("valore 0x%x, %d", i, *i);
    int c[4];
    c[0] = 23;
    c[1] = 78;
    c[2] = 24;
    c[4] = 45;
    int *ptr = &c[0];
    printf("\n0x%x = %d", ptr, *ptr);
    ptr++;
    printf("\n0x%x = %d", ptr, *ptr);
    ptr++;
    printf("\n0x%x = %d", ptr, *ptr);
}