#include <stdio.h>
#include <stdlib.h> // Inclure la bibliothèque standard pour la fonction malloc()

int main() {

    // Déclarer un pointeur de type FILE pour stocker le fichier
    FILE* fpointeur;

    // Ouvrir le fichier "hello.txt" en mode écriture en utilisant la fonction fopen_s()
    // La fonction fopen_s() est utilisée à la place de fopen() pour des raisons de sécurité
    // Le troisième argument "w" indique que le fichier doit être ouvert en mode écriture
    errno_t err = fopen_s(&fpointeur, "hello.txt", "w");

    // Vérifier si l'ouverture du fichier a réussi en vérifiant si la valeur de err est égale à zéro
    if (err != 0) {
        // Afficher un message d'erreur si l'ouverture du fichier a échoué
        printf("Erreur d'ouverture du fichier.\n");
        // Quitter le programme avec un code d'erreur
        return 1;
    }

    // Écrire la chaîne de caractères "Hello World !" dans le fichier en utilisant la fonction fprintf()
    // La chaîne de caractères est écrite dans le fichier via le pointeur fpointeur
    fprintf(fpointeur, "Hello World !");

    // Fermer le fichier en utilisant la fonction fclose()
    fclose(fpointeur);

    // Quitter le programme avec un code de succès
    return 0;
}
