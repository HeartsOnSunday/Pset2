#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argC, string argV[])
{
    if (argC != 2)
    {
        printf("Include the you-know-what ;)\n"); //promt the user for the key
        exit(1); //exit the program
    }
    printf("Argument Count: %i\n", argC);       //argument count
    int key = atoi(argV[1]);    //convert string from command line arg to int
    printf("The Key is: %d\n", key);
    string phrase = get_string("Enter your Message: "); //get phrase
    int length = strlen(phrase);    //declare length
    printf("ciphertext: ");

    for (int i = 0; i < length; i++)    //loop through phrase
    {
        int alphabet = 26;   //use with modulo
        int upperASCII = 65; //use to adjust uppercase letters
        int lowerASCII = 97; //use to adjust lowercase letters

        if (isupper(phrase[i])) //if uppercase print in uppercase
        {
            printf("%c", (((phrase[i] - upperASCII + key) % alphabet) + upperASCII));
            //subtract ascii value and add key, use %26 to find letter, add ascii value then print
        }
        else if (islower(phrase[i]))    //if lowercase print in lowercase
        {
            printf("%c", (((phrase[i] - lowerASCII + key) % alphabet) + lowerASCII));
            //subtract ascii value and add key, use %26 to find letter, add ascii value then print
        }
        else
        {
            printf("%c", phrase[i]);    //if not alphabetical, pass character through
        }
    }
    printf("\n");
    return 0;
}
