#include <stdio.h>

int main (){
    int n = 1;
    char m;
    while(n > 0){
        printf("\nScegli un menu da A a D: ");
        scanf("%c", &m);
        switch(m){
            case 'A':
            case 'a':
              printf("menu Famiglia");
              break;
            case  'B':
            case  'b':
              printf("menu famiglia %c", m);
              break;
            case 'C':
            case 'c':
               printf("\nSe sei sicuro di volere un menu xl, premi 5");
               break;
            case 'D':
            case 'd':
                printf("\nMenu XXXL attivato!");
                break;
            default:
                printf("\nPremi S per uscire: ");
                scanf("%c", &m);
                if(m == 'S' || m == 's') n = 0;
                
        }
    }
}