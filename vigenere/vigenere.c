#include <stdio.h>
#include <cs50.h>
#include <ctype.h> //isalpha
#include <string.h> //strlen
#include <stdlib.h>

//PRjm: It's encyphering like a boss! Nice job adding comments to explain what's going on, vigenere is complicated.
    // But, a few notes: same as with Caesar, it might be easier to follow if you use 'A' and 'a' instead of all the variables
    // comments for the int equalizeLetters and the b++ incrementer might make it easier to follow, too

int main(int argC, string argV[])
{
    int a;
    int b;
    int i;

    if (argC != 2)
    {
        printf("Include the you-know-what ;)\n"); //promt the user for the key
        return 1; //exit the program
    }
    else
    {
        for (i = 0; i < strlen(argV[1]); i++)
        {
            if (!isalpha(argV[1][i]))
            {
                printf("Your Key Phrase must be alphabetical\n");
                return 1;
            }
        }
    }
    string keyPhrase = argV[1];    //get key as a commandline argument
    int keyPhraseLength = strlen(keyPhrase);
    string message = get_string("Enter your Message: "); //get phrase
    int messageLength = strlen(message);    //declare length
    printf("ciphertext: ");

    for (a = 0, b = 0; a < messageLength; a++)   //a is for Key Phrase i is for message
    {

        int equalizeLetters = tolower(keyPhrase[b % keyPhraseLength]) - 'a';
        int alphabet = 26;   //use with modulo
        int upperASCII = 65; //use to adjust uppercase letters
        int lowerASCII = 97; //use to adjust lowercase letters

        if (isupper(message[a]))
        {

            printf("%c", 'A' + (message[a] - upperASCII + equalizeLetters) % alphabet);
            //subtract ascii value and add key, use %26 to find letter, add ascii value then print
            b++;
        }
        else if (islower(message[a]))    //if lowercase print in lowercase
        {
            printf("%c", 'a' + (message[a] - lowerASCII + equalizeLetters) % alphabet);
            //subtract ascii value and add key, use %26 to find letter, add ascii value then print
            b++;
        }
        else
        {
            printf("%c", message[a]);    //if not alphabetical, pass character through
        }
    }
    printf("\n");
    return 0;

}

//c[i] = (p[i] + k[j]) mod 26

//The Ciphertext is

//phrase[i](adjusted for ASCII) + phraseKey[j](adjusted for ASCII) mod 26

//iterate through the phrase
//if its a letter
//if its uppercase
//iterate through the phraseKey and return uppercase

//if its lowercase
//iterate through the phrasekey and return lowercase

//if its not a letter then just pass it through