#include "functionTab.h"

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0;

    for (int i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }

    return somme;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int somme = 0, i = 0;

    for (i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }

    double moyenneTableau = 0;
    moyenneTableau = (double)somme / (double)tailleTableau;

    return moyenneTableau;
}

int sortTableau(int tableau[], int tailleTableau)
{
    for (int i = 0; i < tailleTableau - 1; i++)
    {

        for (int iNombreAComparer = i + 1; iNombreAComparer < tailleTableau; iNombreAComparer++)
        {
            if (tableau[i] > tableau[iNombreAComparer])
            {
                int varAEchanger = tableau[i];
                tableau[i] = tableau[iNombreAComparer];
                tableau[iNombreAComparer] = varAEchanger;
            }
        }
    }
    return 0;
}
