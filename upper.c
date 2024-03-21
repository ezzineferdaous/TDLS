#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "bonjour tou le monde";
    int i = 0;

    while (str[i] != '\0') {
        if (!isupper(str[i])) { // V�rifie si le caract�re n'est pas d�j� une majuscule
            str[i] = toupper(str[i]); // Convertit le caract�re en majuscule
        }
        printf("%c", str[i]); // Affiche le caract�re (maintenant en majuscule) avec printf
        i++;
    }

    printf("\n"); // Nouvelle ligne � la fin avec printf

    return 0;
}
