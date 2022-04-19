/*Added the libraries needed to make program work*/
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Prototype Functions*/
char encrypt(char o, int k);
bool only_digits(string s);

/*Itterates the validity of the key given*/
/*Gives prompt for Plaintext text*/
/*Gives Ciphertext back*/
int main(int argc, string argv[])
{
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage:  ./ceasar key\n");
        return 1;
    }
    int i = 0;
    int k = atoi(argv[1]);
    string plain = get_string("Plaintext:  ");
    int length = strlen(plain);
    char cipher[length + 1];
    for (i = 0; i < length; i++)
    {
        cipher[i] = encrypt(plain[i], k);
    }
    cipher[i] = '\0';

    printf("ciphertext: %s\n", cipher);

}

/*Boolean function*/
/*Iterates if key is digit or not*/
bool only_digits(string s)
{
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}
/*Ciphers text using ASCII values*/
/*returns the value back to the main function*/
char encrypt(char o, int k)
{

    char c;
    if (isupper(o))
    {
        c = ((o - 65 + k) % 26 + 65);
    }
    else if (islower(o))
    {
        c = ((o - 97 + k) % 26 + 97);
    }
    else
    {
        c = o;
    }

    return c;
}
/*The End*/
/*Of the program*/

