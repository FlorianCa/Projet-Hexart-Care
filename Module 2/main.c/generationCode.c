#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

    FILE *f;

    void Mode_BCoeur();
{
    fopen("coeur.txt", "w+");
        if (fichier==NULL)
    {
        printf("Le fichier n'existe pas\n")
    }
    else
    {
        fputs("digitalWrite(LED_1,HIGH)\n digitalWrite(LED_2,HIGH)\n digitalWrite(LED_3,HIGH)\n digitalWrite(LED_4,HIGH)\n digitalWrite(LED_5,HIGH)\n digitalWrite(LED_6,HIGH)\n digitalWrite(LED_7,HIGH)\n digitalWrite(LED_8,HIGH)\n digitalWrite(LED_9,HIGH)\n digitalWrite(LED_10,HIGH)\n delay(857)\n digitalWrite(LED_1,LOW)\n digitalWrite(LED_2,LOW)\n digitalWrite(LED_3,LOW)\n digitalWrite(LED_4,LOW)\n digitalWrite(LED_5,LOW)\n digitalWrite(LED_6,LOW)\n digitalWrite(LED_7,LOW)\n digitalWrite(LED_8,LOW)\n digitalWrite(LED_10,LOW)\n delay(857)\n")
    }
    return 0;
}
