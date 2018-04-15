#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argC, string argV[])
{
    if (argC != 2)
    {
        printf("Include the you-know-what ;)\n"); //promt the user for the key
        exit(1); //exit the program
    }
    //this is the argument count
    printf("Argument Count: %i\n", argC);

    //argV is a string and needs to be converted to an interger with atoi()
    int key = atoi(argV[1]);
    printf("The Key is: %d\n", key);

    string phrase = get_string("Enter your Message: ");
    printf("%s\n", phrase);
    int length = strlen(phrase);
    printf("%i\n", length);

    for (int i = 0; i < length; i++)
    {
        printf("%c\n", phrase[i]);
    }
}


   // int length = strlen(argV[1]);
   // printf("%i\t%s\n", length, argV[0]);

   // for(int i = 0, length = strlen(argV[1]);  i < length; i++)
  /*  {
        if (argV[1][i] != ' ')
        {
            printf("the ascii value at pos %i: %i\n", i, argV[1][i]);
        }
      // printf("The character at pos %i: %c\n", i, argV[1][i]); //uses a nested array aka a two dimensional array
    }
}

// *** GET THE KEY ** FROM COMMAND LINE ARGUMENT
//checked by the if statement on 8

//argC is an int
//argC is the number of arguments passed
//argC must be 2 for caesar to be executed

//argV is an array of strings
//argV is the list of arguments passed
//string argV[]

    //CONVERT TO AN INT

//argV[1] is a string
//convert to int


//atoi: from string to interger
//string num = "50";
//int i = atoi(num);


    // ***GET THE PLAINTEXT***

//use get_string();



    // ***ENCIPHER**

//enciph one character
//enciph entire plaintext

//the key comes from commandline argument (argV[1])
//the key is turned into an interger
//user is prompted for plaintext
    //FOR each character in the plaintext string
        //if alphabetic
            //preserve case
                //shift plaintext character by key
//print chipertext
//END


//Check if alphabetic

if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c is an alphabet.",c);
    else
        printf("%c is not an alphabet.",c);

    return 0;
*/

/*
shift letters only: isalpha
preserve capitalization: isupper, islower

isalpha('Z') ---> true
isupper('Z') ---> true
isLower('Z') ---> false

these are boolean functions


*/

/*
c[i] = (p[i] + k) % 26

alphabetical index

 */

 /*
 Start with: ASCII values
 encipher: alphabetical index
 print: ACSII values

 A-Z
 65- 91
 a-z
 97-123

  */