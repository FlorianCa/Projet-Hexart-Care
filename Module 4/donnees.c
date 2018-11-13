#include "donnees.h"
#include <stdio.h>

void lectureFichier()
{
    int fpoul;
    int ftemps;

    FILE* f1 = NULL;
    f1 = fopen("Battements.csv", "r");
    if(f1 != NULL)
    {
        do
        {
            fpoul = fgetc(f1);
            ftemps = fgetc(f1);
            printf("%c %c", fpoul, ftemps);

        }while(fpoul != EOF);

        fclose(f1);
    }
    else
    {
    printf("Fichier vide");
    }







}
