#include <stdio.h>  //librairie
#include <stdlib.h> //librairie

#include "aire.h"

int main(int argc, char *argv[])
{
    double resultat;
    resultat = aireRectangle(10.0, 25.0);
    printf("L'aire du rectangle est de %f\n", resultat);

    return 0;
}