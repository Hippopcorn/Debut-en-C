#include <stdio.h>  //librairie
#include <stdlib.h> //librairie

#include "aire.h"
#include "healthLost.h"


int main(int argc, char *argv[])

{
    int health = 15;
    int* pointeurSurVie = &health;
    int monney = 100; 
    int* pointeurSurMonney = &monney;

    healthLost(pointeurSurVie, pointeurSurMonney);
    // double resultat;
    // resultat = aireRectangle(10.0, 25.0);
    // printf("L'aire du rectangle est de %f\n", resultat);
    // printf("L'adresse de la variable resultat est : %p\n", &resultat);

    // double *pointeurSurResultat = &resultat;
    // printf("Le pointeur contient l'adresse %p\n", pointeurSurResultat);
    // printf("La valeur contenue à l'adresse du pointeur est : %f\n", *pointeurSurResultat);

    printf("Il vous reste %d points de vie et %d pieces d'or", health, monney);





    return 0;
}