
#include "HEADERS.h"







int main() {
    Tache *taches = NULL;
    int nb_taches = 0;
    int choix;

    do {
        printf("\n=== Liste de t�ches ===\n");
        printf("1. Ajouter une t�che\n");
        printf("2. Modifier une t�che\n");
        printf("3. Supprimer une t�che\n");
        printf("4. Marquer une t�che comme termin�e\n");
        printf("5. Filtrer les t�ches par priorit�\n");
        printf("6. Afficher toutes les t�ches\n");
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
                    printf("Entrez la priorit� � filtrer : ");
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

    // Lib�ration de la m�moire allou�e
    free(taches);

    return 0;
}

