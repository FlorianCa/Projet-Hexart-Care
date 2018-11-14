#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int LED_auChoix;
FILE* fichier = NULL;

void Mode_bCoeur(a) // Check
{
    fichier = fopen("param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL)
    {
    fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n #define LED_auchoix LED_5\n void fonction(){ digitalWrite(LED_1,HIGH);\n digitalWrite(LED_2,HIGH);\n digitalWrite(LED_3,HIGH);\n digitalWrite(LED_4,HIGH);\n digitalWrite(LED_5,HIGH);\n digitalWrite(LED_6,HIGH);\n digitalWrite(LED_7,HIGH);\n digitalWrite(LED_8,HIGH);\n digitalWrite(LED_9,HIGH);\n digitalWrite(LED_10,HIGH);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_10,LOW);\n delay(857); }\n", fichier);
    fclose(fichier);
    }
}

void Mode_unSurDeux() // check
{
    fichier = fopen("param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL)
    {
    fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n \n void fonction(){ digitalWrite(LED_1,HIGH);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,HIGH);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,HIGH);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,HIGH);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,HIGH);\n  digitalWrite(LED_10,LOW);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,HIGH);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,HIGH);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,HIGH);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,HIGH);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,HIGH);\n delay(857); }\n", fichier);
    fclose(fichier);
    }
}


void Mode_unSurTrois()
{
    fichier = fopen("param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL)
    {
    fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n  void fonction(){     digitalWrite(LED_1,HIGH);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,HIGH);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,HIGH);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,HIGH);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,HIGH);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,HIGH);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,HIGH);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,LOW);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,HIGH);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,HIGH);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,HIGH);\n digitalWrite(LED_10,LOW);\n delay(857); } \n", fichier);
    }
}

void Mode_auChoix() // pas de choix
{
    printf("Led au choix;\n");
    scanf("%i",&LED_auChoix);
    fichier = fopen("param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL)
    {
    fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n #define LED_auChoix LED_1 \n void fonction(){ digitalWrite(LED_auChoix,HIGH);\n delay(857);\n digitalWrite(LED_auChoix,LOW);\n delay(857);\n}", fichier);
    fclose(fichier);
    }
}

void Mode_chenille() // Check
{
    fichier = fopen("param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL)
    {
    fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n void fonction(){ digitalWrite(LED_1,HIGH);\n delay(200);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,HIGH);\n delay(200);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,HIGH);\n delay(200);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,HIGH);\n delay(200);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,HIGH);\n delay(200);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,HIGH);\n delay(200);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,HIGH);\n delay(200);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,HIGH);\n delay(200);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,HIGH);\n delay(200);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,HIGH);\n delay(200);\n digitalWrite(LED_10,LOW); }\n", fichier);
    fclose(fichier);
    }
}
