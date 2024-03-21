#include <stdio.h>
#include <string.h>


char ** split(char *strl) {

    char **newString = strl ; // 2D array to store split strings
    int  i , j, ctr;          // Counters and index variables

    j = 0;    // Initialize column index of newString array
    ctr = 0;  // Initialize word count

    // Loop through each character in the input string
    for (i = 0; i <= (strlen(*newString)); i++){
        // If space or NULL found, assign NULL into newString[ctr]
        if (strl[i] == ' ' || strl[i] == '\0') {
            newString[ctr][j] = '\0'; // Null-terminate the word
            ctr++;  // Move to the next word
            j = 0;  // Reset column index to 0 for the next word
        } else {
            newString[ctr][j] = strl[i]; // Store the character into newString
            j++;  // Move to the next character within the word
        }
    }


    // Display the split words stored in newString array
    for (i = 0; i < ctr; i++) {


        return newString[i];
    }


}

int main(){
     char *s ="hello world bonjour";
     split(s);
     return 0;


}



