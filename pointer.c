#include <stdio.h>

int main() {
    char str[] = "bonjour"; // La déclaration d'une chaîne de caractères nécessite des crochets []
    char *end;
    char *star;

    end = str;
    while (*end != '\0') {
        end++;
    }
    end--; // Décrémenter end pour pointer sur le dernier caractère de la chaîne

    star = str;

    while (star < end) { // Utilisation de la condition star < end plutôt que *star < end
        char c = *star;
        *star = *end;
        *end = c;
        star++;
        end--;
    }

    printf("%s\n", str);

    return 0;
}
