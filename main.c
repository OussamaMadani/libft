#include "libft.h"
#include <stdio.h>
int main() { /*
    // Exemple d'utilisation de quelques fonctions de la bibliothèque libft

    // ft_strlen
    const char *str = "Hello, world!";
    size_t length = ft_strlen(str);
    printf("Longueur de la chaîne : %zu\n", length);

    // ft_memmove
    char dest[20] = "Destination";
    const char *src = "Source";
    size_t n = ft_strlen(src); // Utilisation de la fonction strlen de la bibliothèque standard pour déterminer n
    ft_memmove(dest, src, n);
    printf("Résultat de ft_memmove : %s\n", dest);

    // ft_memcpy
    char dest2[20] = "Destination";
    const char *src2 = "Source";
    size_t n2 = ft_strlen(src2); // Utilisation de la fonction strlen de la bibliothèque standard pour déterminer n2
    ft_memcpy(dest2, src2, n2);
    printf("Résultat de ft_memcpy : %s\n", dest2);

    // ft_strlcpy
    char destination[20];
    const char *source = "Hello, world!";
    size_t size = ft_strlcpy(destination, source, sizeof(destination));
    printf("Résultat de ft_strlcpy : %s (taille : %zu)\n", destination, size);

    // ft_strlcat
    char dest3[20] = "olHelllo";
    const char *src3 = "ol";
    size_t dest_size = sizeof(dest3);
    size_t result = ft_strlcat(dest3, src3, dest_size);
    char * join;
    printf("Résultat de ft_strlcat : %s (longueur totale : %zu)\n", dest3, result);

   join = ft_strjoin(dest3, src3);
    printf("Résultat de ft_strjoin olHelllo et ol: %s\n", join);

    join = ft_strtrim(dest3, src3);
     printf("Résultat de ft_strtrim olHelllo et ol : %s\n", join);

      char s1[]="wHellow comment aller vous";
    char set[]="owsuviH ez";
    char *tab;

tab = ft_strtrim(s1,set);
printf("resultat strtrim : %s", tab);*/



    // Test 1: Chaîne vide
    char *str1 = "";
    char **result1 = ft_split(str1, ' ');
    if (result1 == NULL) {
        printf("Test 1: Chaîne vide - Réussi\n");
    } else {
        printf("Test 1: Chaîne vide - Échec\n");
    }

    // Test 2: Chaîne sans séparateurs
    char *str2 = "CeciEstUnTest";
    char **result2 = ft_split(str2, ' ');
    if (result2 != NULL && result2[0] != NULL && result2[0][0] == 'C') {
        printf("Test 2: Chaîne sans séparateurs - Réussi\n");
    } else {
        printf("Test 2: Chaîne sans séparateurs - Échec\n");
    }

    // Test 3: Chaîne avec séparateurs
    char *str3 = "Hello,World,This,Is,A,Test";
    char **result3 = ft_split(str3, ',');
    if (result3 != NULL && result3[0] != NULL && result3[5] != NULL && result3[5][0] == 'T') {
        printf("Test 3: Chaîne avec séparateurs - Réussi\n");
    } else {
        printf("Test 3: Chaîne avec séparateurs - Échec\n");
    }

    // Test 4: Chaîne avec espaces
    char *str4 = "  Ceci est   un   test  ";
    char **result4 = ft_split(str4, ' ');
    if (result4 != NULL && result4[0] != NULL && result4[4] != NULL && result4[4][0] == 't') {
        printf("Test 4: Chaîne avec espaces - Réussi\n");
    } else {
        printf("Test 4: Chaîne avec espaces - Échec\n");
    }

    // Nettoyer la mémoire
    free(result1);
    free(result2);
    free(result3);
    free(result4);

    return 0;
}