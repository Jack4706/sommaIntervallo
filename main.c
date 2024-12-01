#include <stdio.h>
#include "funzioni.h"

int main(){

int num1, num2;

    printf("inserisci il primo intervallo:\n");
    scanf("%d", &num1);
    printf("inserisci il secondo intervallo:\n");
    scanf("%d", &num2);

    printf("la somma dei numeri pari tra %d e %d e' %d",num1, num2, swap(num1 , num2));

    return 0;
}
