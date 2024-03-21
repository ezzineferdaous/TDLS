#include <stdio.h>

int main() {
    int num;
    int nomberj;

    printf("Enter days: ");
    scanf("%f", &nomberj);
    printf("1-Mois\n2-Jours\n3-Heures\n4-Minutes\n5-Secondes\n");
    printf("Enter your option : ");
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("Mois: %.2f\n", nomberj / 30.0);
            break;
        case 2:
            printf("Jours: %d\n", nomberj );
            break;
        case 3:
            printf("Heures: %d\n", nomberj*24);
            break;
        case 4:
            printf("Secondes: %d\n");
            break;
        case 5:
            printf("Secondes: %d\n", nomberj*(60* 60));
            break;
        default:
            printf("Choix invalide\n");
            break;
    }

    return 0;
}
