#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int b;
FILE* fichier = NULL;


void Mode_bCoeur() // fonction qui allume toutes les Led
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL)
    {
    fputs("#define LED_MODE 1", fichier); // �crit dans le fichier "param.h" le programme du Mode_bCoeur
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_unSurDeux() // fonction qui allume une Led sur deux
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // v�rifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 2", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}


void Mode_unSurTrois()// fonction qui allume une Led sur trois
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // v�rifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 3", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_auChoix() // fonction qui allume une Led choisit
{
    printf("Led au choix;\n"); // demande la Led � l'utilisateur
    scanf("%i",&b); // r�cu�re la valeur entr�e par l'utilisateur
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // v�rifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 4\n", fichier);
    fputs("#define LED_auChoix b", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_chenille() // fonction qui allume les Led en mode chenille
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // v�rifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 5", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_fade() // fonction qui allume les Led en mode chenille
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // v�rifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 6", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_moitie() // fonction qui allume les Led en mode chenille
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // v�rifie que le fichier n'est pas NULL
    {
    fputs("#define LED_MODE 7", fichier);
    fclose(fichier); // ferme le fichier "param.h"
    }
}



