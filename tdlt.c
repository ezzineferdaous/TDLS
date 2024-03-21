#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char nom[100];
    char description[100];
    int priorite;
    int terminee;
} Tache;

// Fonction  ajouter
void ajouterTache(Tache **taches, int *nb_taches) {
    (*nb_taches)++;
    *taches = (Tache *)realloc(*taches, (*nb_taches) * sizeof(Tache));
    if (*taches == NULL) {
        printf("Erreur : �chec d'allocation m�moire !\n");
        exit(1);
    }

    Tache nouvelle_tache;
    printf("Entrez le nom de la t�che : ");
    scanf("%s", nouvelle_tache.nom);
    printf("Entrez la description de la t�che : ");
    scanf("%s", nouvelle_tache.description);
    printf("Entrez la priorit� de la t�che (1-5) : ");
    scanf("%d", &nouvelle_tache.priorite);
    nouvelle_tache.terminee = 0;

    (*taches)[*nb_taches - 1] = nouvelle_tache;

    printf("T�che ajout�e avec succ�s !\n");
}

// Fonction mettre
void modifierTache(Tache *taches, int nb_taches) {
    int index;
    printf("Entrez l'indice de la t�che � mettre � jour : ");
    scanf("%d", &index);

    if (index < 1 || index > nb_taches) {
        printf("Erreur : indice de t�che invalide !\n");
        return;
    }

    Tache *tache = &taches[index - 1];
    printf("Entrez le nouveau nom de la t�che : ");
    scanf("%s", tache->nom);
    printf("Entrez la nouvelle description de la t�che : ");
    scanf("%s", tache->description);
    printf("Entrez la nouvelle priorit� de la t�che (1-5) : ");
    scanf("%d", &tache->priorite);

    printf("T�che mise � jour avec succ�s !\n");
}

// Fonction pour supprimer une t�che
void supprimerTache(Tache **taches, int *nb_taches) {
    int index;
    printf("Entrez l'indice de la t�che � supprimer : ");
    scanf("%d", &index);

    if (index < 1 || index > *nb_taches) {
        printf("Erreur : indice de t�che invalide !\n");
        return;
    }

    for (int i = index - 1; i < *nb_taches - 1; i++) {
        (*taches)[i] = (*taches)[i + 1];
    }

    (*nb_taches)--;
    *taches = (Tache *)realloc(*taches, (*nb_taches) * sizeof(Tache));

    printf("T�che supprim�e avec succ�s !\n");
}

// Fonction marquer
void marquerTacheCommeTerminee(Tache *taches, int nb_taches) {
    int index;
    printf("Entrez l'indice de la t�che � marquer comme termin�e : ");
    scanf("%d", &index);

    if (index < 1 || index > nb_taches) {
        printf("Erreur : indice de t�che invalide !\n");
        return;
    }

    taches[index - 1].terminee = 1;

    printf("T�che marqu�e comme termin�e !\n");
}

// Fonction filtrer
void filtrerTachesParPriorite(Tache *taches, int nb_taches, int priorite) {
    printf("T�ches avec priorit� %d :\n", priorite);
    for (int i = 0; i < nb_taches; i++) {
        if (taches[i].priorite == priorite) {
            printf("Nom : %s, Description : %s, Priorit� : %d\n", taches[i].nom, taches[i].description, taches[i].priorite);
        }
    }
}

// Fonction  afficher
void afficherTaches(Tache *taches, int nb_taches) {
    printf("Toutes les t�ches :\n");
    for (int i = 0; i < nb_taches; i++) {
        printf("Indice : %d, Nom : %s, Description : %s, Priorit� : %d, Termin�e : %s\n", i + 1, taches[i].nom, taches[i].description, taches[i].priorite, taches[i].terminee ? "Oui" : "Non");
    }
}

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
    } while (choix < 7);


    free(taches);// kt Lib�rer  m�moire allou�e

    return 0;
}
