#include <stdio.h>
#include <string.h> //because there is use of multiple strings

int main()
{
    // MAD LIBS GAME

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description) : ");
    /* Used fgets because we want to accept input with white spaces
    scanf does not accept input with white spaces */
    fgets(adjective1, sizeof(adjective1), stdin);
    /*used to get rid of new line which is caused after this input*/
    adjective1[strlen(adjective1) - 1] = '\0';


    printf("Enter a noun (animal or person) : ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description) : ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter a verb (ending with ing) : ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description) : ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    // printf("%s", noun);
    // printf("%s", verb);
    // printf("%s", adjective1);
    // printf("%s", adjective2);
    // printf("%s", adjective3);
    
    printf("Today I went to a %s zoo. \n", adjective1);
    printf("I an exhibit, I saw a %s. \n", noun);
    printf("%s was %s and %s ! \n", noun, adjective2, verb);
    printf("I was %s! \n", adjective3);

    return 0;
}
