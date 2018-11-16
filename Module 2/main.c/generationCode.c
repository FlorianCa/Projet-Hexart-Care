#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int ledChoix;
FILE* fichier = NULL;

//bCoeur function which lit all the LEDs at each heartbeat.

void Mode_bCoeur()
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"

    //Check if the file isn't empty or non-existent.

    if (fichier!=NULL)
    {

    //Write the Mode_bCoeur's program in the "param.h" file.

    fputs("#define LED_MODE 1", fichier);

    //Close the "param.h" file.

    fclose(fichier);
    }
}

//unSurDeux function which lit half of the LEDs at each heartbeat.

void Mode_unSurDeux()
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"

    //Check if the file isn't empty or non-existent.

    if (fichier!=NULL)
    {
    fputs("#define LED_MODE 2", fichier);

    //Close the "param.h" file.

    fclose(fichier);
    }
}

//unSurTrois function which lit third of the LEDs at each heartbeat.

void Mode_unSurTrois()

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"

    //Check if the file isn't empty or non-existent.

    if (fichier!=NULL)

    fputs("#define LED_MODE 3", fichier);

    //Close the "param.h" file.

    fclose(fichier);
    }
}

//auChoix mode which lit only a chosen LED.

void Mode_auChoix() /
{

    //Asks the user the LED to make blink.

    printf("Led au choix;\n");
    scanf("%i",&ledChoix);

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"

    //Check if the file isn't empty or non-existent.

    if (fichier!=NULL)
    {
    fputs("#define LED_MODE 4\n", fichier);
    fputs("#define LED_auChoix ledChoix", fichier);

    //Close the "param.h" file.

    fclose(fichier);
    }
}

//Chenille mode which lit up a LED and lit off the former LED

void Mode_chenille()
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"

    //Check if the file isn't empty or non-existent.

    if (fichier!=NULL)
    {
    fputs("#define LED_MODE 5", fichier);

    //Close the "param.h" file.

    fclose(fichier);
    }
}

//fade mode which turns off the LEDs one after the other.

void Mode_fade() // fonction qui allume les Led en mode chenille
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"

    //Check if the file isn't empty or non-existent.

    if (fichier!=NULL)
            {
    fputs("#define LED_MODE 6", fichier);

    //Close the "param.h" file.

    fclose(fichier);
    }
}

//moitié mode it's the opposite of the "fade" mode.

void Mode_moitie()
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"

    //Check if the file isn't empty or non-existent.

    if (fichier!=NULL)
    {
    fputs("#define LED_MODE 7", fichier);

    //Close the "param.h" file.

    fclose(fichier);
    }
}

//chenillard mode it's the opposite of the "fade" mode.

void Mode_chenillard()
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"

    //Check if the file isn't empty or non-existent.

    if (fichier!=NULL)
    {
    fputs("#define LED_MODE 8", fichier);

    //Close the "param.h" file.

    fclose(fichier);
    }
}

//allerRetour mode, it's a mix between the "fade" and the "chenillard" mode

void Mode_allerRetour()
{

    //Open the "param.h" file.

    fichier = fopen("C:/Users/Quennehen/Documents/GitHub/Projet-Hexart-Care-branche-secondaire/Module 2/main.c bis/coeur.c/param.h", "w+"); // ouvre le fichier "param.h"
    if (fichier!=NULL)
    {
    fputs("#define LED_MODE 9", fichier);

    //Close the "param.h" file.

    fclose(fichier);
    }
}


