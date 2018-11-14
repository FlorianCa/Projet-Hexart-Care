#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int LED_auChoix;
FILE* fichier = NULL;

//bCoeur function which lit all the LEDs at each heartbeat.

void Mode_bCoeur()
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c/coeur.c/param.h", "w+");
    if (fichier!=NULL)
    {

        //Write the Mode_bCoeur's program in the "param.h" file.

        fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n #define LED_auchoix LED_5\n void fonction(){ digitalWrite(LED_1,HIGH);\n digitalWrite(LED_2,HIGH);\n digitalWrite(LED_3,HIGH);\n digitalWrite(LED_4,HIGH);\n digitalWrite(LED_5,HIGH);\n digitalWrite(LED_6,HIGH);\n digitalWrite(LED_7,HIGH);\n digitalWrite(LED_8,HIGH);\n digitalWrite(LED_9,HIGH);\n digitalWrite(LED_10,HIGH);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_10,LOW);\n delay(857); }\n", fichier);

        //Close the "param.h" file.

        fclose(fichier);
    }
}

//unSurDeux function which lit half of the LEDs at each heartbeat.

void Mode_unSurDeux()
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c/coeur.c/param.h", "w+");

    //Verify if the file isn't empty or non-existent.

    if (fichier!=NULL)
    {

        //Write the Mode_unSurDeux's program in the "param.h" file.
        fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n \n void fonction(){ digitalWrite(LED_1,HIGH);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,HIGH);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,HIGH);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,HIGH);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,HIGH);\n  digitalWrite(LED_10,LOW);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,HIGH);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,HIGH);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,HIGH);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,HIGH);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,HIGH);\n delay(857); }\n", fichier);

        //Close the "param.h" file.

        fclose(fichier);
    }
}

//unSurTrois function which lit third of the LEDs at each heartbeat.

void Mode_unSurTrois()
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c/coeur.c/param.h", "w+");

    //Verify if the file isn't empty or non-existent.

    if (fichier!=NULL)
    {

        //Write the Mode_unSurTrois' program in the "param.h" file.

        fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n  void fonction(){     digitalWrite(LED_1,HIGH);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,HIGH);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,HIGH);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,HIGH);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,HIGH);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,HIGH);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,HIGH);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,LOW);\n delay(857);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,HIGH);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,HIGH);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,HIGH);\n digitalWrite(LED_10,LOW);\n delay(857); } \n", fichier);

        //Close the "param.h" file.

        fclose(fichier);
    }
}

//auChoix mode which lit only a chosen LED.

void Mode_auChoix()
{

    //Asks the user the LED to lit.

    printf("Led au choix;\n");
    scanf("%i",&LED_auChoix);

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c/coeur.c/param.h", "w+");

    //Verify if the file isn't empty or non-existent.

    if (fichier!=NULL)
    {

        //Write the Mode_auChoix's program in the "param.h" file.

        fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n #define LED_auChoix LED_1 \n void fonction(){ digitalWrite(LED_auChoix,HIGH);\n delay(857);\n digitalWrite(LED_auChoix,LOW);\n delay(857);\n}", fichier);

        //Close the "param.h" file.

        fclose(fichier);
    }
}

//Chenille mode which lit up a LED and lit off the former LED

void Mode_chenille()
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c/coeur.c/param.h", "w+");

    //Verify if the file isn't empty or non-existent.

    if (fichier!=NULL)
    {

        //Write the Mode_chenille's program in the "param.h" file.

        fputs("#define LED_1 2\n #define LED_2 3\n #define LED_3 4\n #define LED_4 5\n #define LED_5 6\n #define LED_6 7\n #define LED_7 8\n #define LED_8 9\n #define LED_9 10\n #define LED_10 11\n #define LED_MODE 1\n void fonction(){ digitalWrite(LED_1,HIGH);\n delay(200);\n digitalWrite(LED_1,LOW);\n digitalWrite(LED_2,HIGH);\n delay(200);\n digitalWrite(LED_2,LOW);\n digitalWrite(LED_3,HIGH);\n delay(200);\n digitalWrite(LED_3,LOW);\n digitalWrite(LED_4,HIGH);\n delay(200);\n digitalWrite(LED_4,LOW);\n digitalWrite(LED_5,HIGH);\n delay(200);\n digitalWrite(LED_5,LOW);\n digitalWrite(LED_6,HIGH);\n delay(200);\n digitalWrite(LED_6,LOW);\n digitalWrite(LED_7,HIGH);\n delay(200);\n digitalWrite(LED_7,LOW);\n digitalWrite(LED_8,HIGH);\n delay(200);\n digitalWrite(LED_8,LOW);\n digitalWrite(LED_9,HIGH);\n delay(200);\n digitalWrite(LED_9,LOW);\n digitalWrite(LED_10,HIGH);\n delay(200);\n digitalWrite(LED_10,LOW); }\n", fichier);

        //Close the "param.h" file.

        fclose(fichier);
    }
}
