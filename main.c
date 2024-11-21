#include <stdio.h>
float mediaAritmetica(float somma,float numero) {
    return somma/numero;
}
int main(void) {
    float numero;
    float somma;
    printf("inserisci la somma dei numeri:");
    scanf("%f",&somma);
    printf("inserisci il numero dei numeri che verranno utilizzati:");
    scanf("%f",&numero);
    printf("la media corrisponde a %f",mediaAritmetica(somma,numero));

    return 0;
}
