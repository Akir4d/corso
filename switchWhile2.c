#include <stdio.h>

int main()
{
    char scelta = 'I';
    
    while (scelta == 'I')
    {
        printf("Menu':\nA per parlare\nB per abbaiare\nC per cinguettare\nScelta:");
        scanf("%c", &scelta);

        switch (scelta)
        {
        case 'A':
        case 'a':
            printf("\nSecondo te posso parlare?\n");
            break;
        case 'B':
        case 'b':
            printf("\nTi sembro un cane?\n");
            break;
        case 'C':
        case 'c':
            printf("\nNon centra nulla, ma lo sapevi che Titti e' maschio?");
            break;
        default:
            printf("\nnon ho capito\n");
            scelta = 'I';
        }
       
    }
    return 0;
}