#include <stdio.h>
#include <cs50.h>
#include <ctype.h> //allows toupper
#include <string.h> //allows strlen

int main(void)
{
    //GET THE NAME
    int a;  //use in loop later
    string name = get_string("Enter a name: ");  //get the name as a string
    printf("%s\n", name); //print the name just for fun

    long nameLength = strlen(name); //store the length of the name to use in the loop later

    char firstInnitial = toupper(name[0]);   //capitlize the first initial (if its not capitalized already)
    printf("%c", firstInnitial);

    for (a = 0; a < nameLength; a++)
    {

        if (name[a] == ' ') //find the space in the string
        {
            printf("%c", toupper(name[a + 1])); //capitalize the letter after the space
        }

    }
    printf("\n"); //print a newline after the initals have been printed
}
