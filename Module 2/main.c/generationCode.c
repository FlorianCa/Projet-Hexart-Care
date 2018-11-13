#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int LED_auChoix;
FILE* fichier

void Mode_bCoeur();
{
    fichier = fopen("param.h", "w+");
    fputs("digitalWrite(LED_1,HIGH)\n digitalWrite(LED_2,HIGH)\n digitalWrite(LED_3,HIGH)\n digitalWrite(LED_4,HIGH)\n digitalWrite(LED_5,HIGH)\n digitalWrite(LED_6,HIGH)\n digitalWrite(LED_7,HIGH)\n digitalWrite(LED_8,HIGH)\n digitalWrite(LED_9,HIGH)\n digitalWrite(LED_10,HIGH)\n delay(857)\n digitalWrite(LED_1,LOW)\n digitalWrite(LED_2,LOW)\n digitalWrite(LED_3,LOW)\n digitalWrite(LED_4,LOW)\n digitalWrite(LED_5,LOW)\n digitalWrite(LED_6,LOW)\n digitalWrite(LED_7,LOW)\n digitalWrite(LED_8,LOW)\n digitalWrite(LED_10,LOW)\n delay(857)\n", fichier);
    fclose(fichier);
}

void Mode_unSurDeux();
{
    fichier = fopen("param.h", "w+");
    fputs("digitalWrite(LED_1,HIGH)\n digitalWrite(LED_2,LOW)\n digitalWrite(LED_3,HIGH)\n digitalWrite(LED_4,LOW)\n digitalWrite(LED_5,HIGH)\n digitalWrite(LED_6,LOW)\n digitalWrite(LED_7,HIGH)\n digitalWrite(LED_8,LOW)\n digitalWrite(LED_9,HIGH)\n  digitalWrite(LED_1,LOW)\n delay(857)\n digitalWrite(LED_1,LOW)\n digitalWrite(LED_2,HIGH)\n digitalWrite(LED_3,LOW)digitalWrite(LED_4,HIGH)\n digitalWrite(LED_5,LOW)\n digitalWrite(LED_6,HIGH)\n digitalWrite(LED_7,LOW)\n digitalWrite(LED_8,HIGH)\n digitalWrite(LED_9,LOW)\n digitalWrite(LED_10,HIGH)\n delay(857)\n", fichier);
    fclose(fichier);
}

void Mode_unSurTrois();
{
    fichier = fopen("param.h", "w+");
    fputs("digitalWrite(LED_1,HIGH)\n digitalWrite(LED_2,LOW)\n digitalWrite(LED_3,LOW)\n digitalWrite(LED_4,HIGH)\n digitalWrite(LED_5,LOW)\n digitalWrite(LED_6,LOW)\n digitalWrite(LED_7,HIGH)\n digitalWrite(LED_8,LOW)\n digitalWrite(LED_9,LOW)\n digitalWrite(LED_10,HIGH)\n delay(857)\n digitalWrite(LED_1,LOW)\n digitalWrite(LED_2,HIGH)\n digitalWrite(LED_3,HIGH)\n digitalWrite(LED_4,LOW)\n digitalWrite(LED_5,HIGH)\n digitalWrite(LED_6,HIGH)\n digitalWrite(LED_7,LOW)\n digitalWrite(LED_8,HIGH)\n digitalWrite(LED_9,HIGH)\n digitalWrite(LED_10,LOW)\n delay(857)\n", fichier);
    fclose(fichier);
}

void Mode_auChoix();
{
    printf("Led au choix\n")
    scanf("%i",&LED_auChoix)
    fichier = fopen("param.h", "w+");
    fputs("digitalWrite(LED_auChoix,HIGH)\n delay(200)\n digitalWrite(LED_auChoix,LOW)\n delay(200)\n", fichier);
    fclose(fichier);
}

void Mode_chenille();
{
    fichier = fopen("param.h", "w+");
    fputs("digitalWrite(LED_1,HIGH)\n delay(200)\n digitalWrite(LED_1,LOW)\n digitalWrite(LED_2,HIGH)\n delay(200)\n digitalWrite(LED_2,LOW)\n digitalWrite(LED_3,HIGH)\n delay(200)\n digitalWrite(LED_3,LOW)\n digitalWrite(LED_4,HIGH)\n delay(200)\n digitalWrite(LED_4,LOW)\n digitalWrite(LED_5,HIGH)\n delay(200)\n digitalWrite(LED_5,LOW)\n digitalWrite(LED_6,HIGH)\n delay(200)\n digitalWrite(LED_6,LOW)\n digitalWrite(LED_7,HIGH)\n delay(200)\n digitalWrite(LED_7,LOW)\n digitalWrite(LED_8,HIGH)\n delay(200)\n digitalWrite(LED_8,LOW)\n digitalWrite(LED_9,HIGH)\n delay(200)\n digitalWrite(LED_9,LOW)\n digitalWrite(LED_10,HIGH)\n delay(200)\n digitalWrite(LED_10,LOW)\n", fichier);
    fclose(fichier);
}
