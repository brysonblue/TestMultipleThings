#include <inttypes.h>
#include <stdio.h>
#include <string.h>


int main(void)
{

    char name[25]; //bytes
    int age;

    printf("\nWhat's your name?");
    //scanf("%s", &name);                        // scanf is an input function up to a white space
    fgets(name, 25, stdin);             /* fgets function is an input that reads white spaces,
                                                    stdin is standard input */
    name[strlen(name)-1] = '\0';                // strlen == string length

    printf("\nHow old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    return 0;
}