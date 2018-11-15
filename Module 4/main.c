//Include the <string.h> library.

#include <string.h>

//Include the "données.h" file.

#include "donnees.h"

//Include the "menu.h" file.

#include "menu.h"

//Include the "action.h" file.

#include "action.h"

//Creation of the "main()" function.

int main()
{

    //Initialization of the chained list.

    ListeDonnees* mesDonnees = initialisation();

    //File reading which put the file's values in the list.

    lectureFichier(mesDonnees);

    //Calling the "menu" function.

    menu(mesDonnees);

    return 0;
}
