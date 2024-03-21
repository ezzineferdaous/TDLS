
#include "HEADERS.h"







int main() {
    Tache *taches = NULL;
    int nb_taches = 0;
    int choix;

    do {
        printf("\n=== Liste de tâches ===\n");
        printf("1. Ajouter une tâche\n");
        printf("2. Modifier une tâche\n");
        printf("3. Supprimer une tâche\n");
        printf("4. Marquer une tâche comme terminée\n");
        printf("5. Filtrer les tâches par priorité\n");
        printf("6. Afficher toutes les tâches\n");
        printf("7. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterTache(&taches, &nb_taches);
                break;
            case 2:
                modifierTache(taches, nb_taches);
                break;
            case 3:
                supprimerTache(&taches, &nb_taches);
                break;
            case 4:
                marquerTacheCommeTerminee(taches, nb_taches);
                break;
            case 5:
                {
                    int priorite;
                    printf("Entrez la priorité à filtrer : ");
                    scanf("%d", &priorite);
                    filtrerTachesParPriorite(taches, nb_taches, priorite);
                }
                break;
            case 6:
                afficherTaches(taches, nb_taches);
                break;
            case 7:
                printf("Fermeture...\n");
                break;
            default:
                printf("Choix invalide ! Veuillez entrer un nombre entre 1 et 7.\n");
        }
    } while (choix != 7);

    // Libération de la mémoire allouée
    free(taches);

    return 0;
}

