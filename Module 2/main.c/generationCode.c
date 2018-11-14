#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int LED_auChoix;
FILE* fichier = NULL;

void Mode_bCoeur() // fonction qui allume toutes les Led
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL)
    {
    fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n #define LED_auchoix LED_5\n void fonction(){ digitalWrite(LED_1,HIGH);\n digitalWrite(LED_2,HIGH);\n digitalWrite(LED_3,HIGH);\n digitalWrite(LED_4,HIGH);\n digitalWrite(LED_5,HIGH);\n digitalWrite(LED_6,HIGH);\n digitalWrite(LED_7,HIGH);\n digitalWrite(LED_8,HIGH);\n digitalWrite(LED_9,HIGH);\n digitalWrite(LED_10,HIGH);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_10,LOW);\n delay(857); }\n", fichier);
    // écrit dans le fichier "param.h" le programme du Mode_bCoeur
    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_unSurDeux() // fonction qui allume une Led sur deux
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n \n void fonction(){ digitalWrite(LED_1,HIGH);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,HIGH);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,HIGH);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,HIGH);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,HIGH);\n  digitalWrite(LED_10,LOW);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,HIGH);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,HIGH);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,HIGH);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,HIGH);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,HIGH);\n delay(857); }\n", fichier);

    fclose(fichier); // ferme le fichier "param.h"
    }
}


void Mode_unSurTrois()// fonction qui allume une Led sur trois
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n  void fonction(){     digitalWrite(LED_1,HIGH);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,HIGH);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,HIGH);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,HIGH);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,HIGH);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,HIGH);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,HIGH);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,LOW);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,HIGH);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,HIGH);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,HIGH);\n digitalWrite(LED_10,LOW);\n delay(857); } \n", fichier);

    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_auChoix() // fonction qui allume une Led choisit
{
    printf("Led au choix;\n"); // demande la Led à l'utilisateur
    scanf("%i",&LED_auChoix); // récuère la valeur entrée par l'utilisateur
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n #define LED_auChoix LED_1 \n void fonction(){ digitalWrite(LED_auChoix,HIGH);\n delay(857);\n digitalWrite(LED_auChoix,LOW);\n delay(857);\n}", fichier);

    fclose(fichier); // ferme le fichier "param.h"
    }
}

void Mode_chenille() // fonction qui allume les Led en mode chenille
{
    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL) // vérifie que le fichier n'est pas NULL
    {
    fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n void fonction(){ digitalWrite(LED_1,HIGH);\n delay(200);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,HIGH);\n delay(200);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,HIGH);\n delay(200);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,HIGH);\n delay(200);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,HIGH);\n delay(200);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,HIGH);\n delay(200);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,HIGH);\n delay(200);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,HIGH);\n delay(200);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,HIGH);\n delay(200);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,HIGH);\n delay(200);\n digitalWrite(LED_10,LOW); }\n", fichier);

    fclose(fichier); // ferme le fichier "param.h"
    }
}
