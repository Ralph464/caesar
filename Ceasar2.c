/*Added the libraries needed to make program work*/
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Defined some variables in order to contain values*/
char letter;
char base;
int key;


/*function in order to calculate the encryption*/
char encrypt(char letter, char base, int key);

/*promps the user to type out their values*/
/*if their input is wrong, there will be an error and clarifying message*/
int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("./Ceasar key\n");
    }

    return 1;

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("./Ceasar key\n");
        }
       
       int q = atoi(argv[1]);
       
    }
}

