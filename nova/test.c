#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0, b = 0;
    printf("\nDammi il primo numero: ");
    scanf("%i", &a);
    printf("\nDammi il secondo numero: ");
    scanf("%i", &b);
    printf("\n%i + %i = %i\n", a, b, a + b);
    printf("%i x %i = %i\n", a, b, a * b);
    printf("%i - %i = %i\n", a, b, a - b);
    if (b == 0)
    {
        printf("\nNon posso dividere per 0!\n");
    }
    else
    {
        printf("%i / %i = %i\n", a, b, a / b);
    }

    return 0;
}
