#include <stdio.h>

int main(void) {
    float a = 0;
    float b = 0;
    float p = 0;
    float volume = 0;

    printf("Inserire l'altezza del parallelepipedo: \n");
    scanf("%f", &a);
    printf("Inserire la base del parallelepipedo: \n");
    scanf("%f", &b);
    printf("Inserire la profondita del parallelepipedo: \n");
    scanf("%f", &p);

    printf("\n");

    if (a != 0 && b != 0 && p != 0) {
        volume = a * b * p;
        printf("Il volume del parallelepipedo e: %.2f\n", volume);
    } else {
        printf("Errore");
    }


    return 0;
}
