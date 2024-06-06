#include <stdio.h>
#include <string.h>

/*
* Stringhe: scrivete un programma per confrontare due stringhe 
* e per concatenare due stringhe.
*/

int main() {
    // Stringhe 
    char stringa1[100];
    char stringa2[100];
    char concatenata[200];

    printf("\nInserisci la prima stringa: ");
    fgets(stringa1, sizeof(stringa1), stdin);
    stringa1[strcspn(stringa1, "\n")] = '\0';

    printf("\nInserisci la seconda stringa: ");
    fgets(stringa2, sizeof(stringa2), stdin);
    stringa2[strcspn(stringa2, "\n")] = '\0';

    if (strcmp(stringa1, stringa2)){
        printf("\nle due stringhe non sono uguali");
    } else {
        printf("\nle due stringhe sono uguali");
    }

    strcpy(concatenata, stringa1);
    strcat(concatenata, " ");
    strcat(concatenata, stringa2);

    printf("\nla stringa concatenata è: %s\n", concatenata);

}