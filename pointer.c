#include <stdio.h>

int main() {
    char str[] = "bonjour"; // La d�claration d'une cha�ne de caract�res n�cessite des crochets []
    char *end;
    char *star;

    end = str;
    while (*end != '\0') {
        end++;
    }
    end--; // D�cr�menter end pour pointer sur le dernier caract�re de la cha�ne

    star = str;

    while (star < end) { // Utilisation de la condition star < end plut�t que *star < end
        char c = *star;
        *star = *end;
        *end = c;
        star++;
        end--;
    }

    printf("%s\n", str);

    return 0;
}
