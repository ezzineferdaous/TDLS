#include <stdio.h>



int main(void) {
    // Déclaration des variables
    float f, c;

    // Demande à l'utilisateur de saisir la température en Fahrenheit
    printf("Entrez la température en Fahrenheit : ");
    scanf("%f", &f);

    // Conversion de Fahrenheit à Celsius
    celsius = (f - 32) / 1.8;

    // Affichage du résultat
    printf("%2f Fahrenheit est équivalent à %.2f Celsius.\n", f, c);

    return 0;
}

