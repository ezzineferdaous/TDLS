#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "bonjour tou le monde";
    int i = 0;

    while (str[i] != '\0') {
        if (!isupper(str[i])) { // Vérifie si le caractère n'est pas déjà une majuscule
            str[i] = toupper(str[i]); // Convertit le caractère en majuscule
        }
        printf("%c", str[i]); // Affiche le caractère (maintenant en majuscule) avec printf
        i++;
    }

    printf("\n"); // Nouvelle ligne à la fin avec printf

    return 0;
}
