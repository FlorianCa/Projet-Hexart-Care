#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"


void Mode_bCoeur()
{
    FILE* fichier = fopen("coeur.txt", "w+");
    fputs("digitalWrite(LED_1,HIGH)\n digitalWrite(LED_2,HIGH)\n digitalWrite(LED_3,HIGH)\n digitalWrite(LED_4,HIGH)\n digitalWrite(LED_5,HIGH)\n digitalWrite(LED_6,HIGH)\n digitalWrite(LED_7,HIGH)\n digitalWrite(LED_8,HIGH)\n digitalWrite(LED_9,HIGH)\n digitalWrite(LED_10,HIGH)\n delay(857)\n digitalWrite(LED_1,LOW)\n digitalWrite(LED_2,LOW)\n digitalWrite(LED_3,LOW)\n digitalWrite(LED_4,LOW)\n digitalWrite(LED_5,LOW)\n digitalWrite(LED_6,LOW)\n digitalWrite(LED_7,LOW)\n digitalWrite(LED_8,LOW)\n digitalWrite(LED_10,LOW)\n delay(857)\n",fichier);
    fclose(fichier);
}

void Mode_unSurDeux()
{
    return EXIT_SUCCESS;
}
void Mode_unSurTrois()
{

    return EXIT_SUCCESS;

}
void Mode_auChoix()
{
    return EXIT_SUCCESS;
}
void Mode_chenille()
{
    return EXIT_SUCCESS;
}
