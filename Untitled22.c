
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Vérifie si le nombre d'arguments est correct
    if (argc < 2) {
        printf("Utilisation : %s <argument>\n", argv[0]);
        return 1;  // Quitte le programme avec un code d'erreur
    }

    // Affiche le nom du programme
    printf("Nom du programme : %s\n", argv[0]);

    // Affiche les arguments supplémentaires
    printf("Arguments supplémentaires :\n");
    for (int i = 1; i < argc; i++) {
        printf("Argument %d : %s\n", i, argv[i]);
    }

    return 0;  // Quitte le programme normalement
}
