#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int ledChoix;
FILE* fichier = NULL;


void Mode_bCoeur() // fonction qui allume toutes les Led
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL)
    {
    fputs("#define LED_MODE 1", fichier); // écrit dans le fichier "param.h" le programme du Mode_bCoeur
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_unSurDeux() // fonction qui allume une Led sur deux
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 2", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}


void Mode_unSurTrois()// fonction qui allume une Led sur trois
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 3", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_auChoix() // fonction qui allume une Led choisit
{
    printf("Led au choix;\n"); // demande la Led à l'utilisateur
    scanf("%i",&ledChoix); // récuère la valeur entrée par l'utilisateur
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 4\n", fichier);
    fputs("#define LED_auChoix ledChoix", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_chenille() // fonction qui allume les Led en mode chenille
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 5", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_fade() // fonction qui allume les Led en mode chenille
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 6", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_moitie() // fonction qui allume les Led en mode chenille
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 7", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_chenillard() // fonction qui allume les Led en mode chenille
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 8", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_allerRetour() // fonction qui allume les Led en mode chenille
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 9", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}


