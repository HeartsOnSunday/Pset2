#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argC, string argV[])
{

    // *** GET THE KEY ** FROM COMMAND LINE ARGUMENT

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








}

//Check if alphabetic
/*
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
