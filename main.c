#include "libft.h"
#include <stdio.h>
int main() {
    /*
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

char tab[]= "-2147483648";
int x;
x = ft_atoi(tab);
char * y;
y = ft_itoa(-2147483648);
printf("resultat atoi: %i\n", x);
printf("Resutat itoa: %s\n", y);

*/

int fd = open("mon_fichier.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);

    if (fd == -1) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    char str[] = "Hello, World!";

    // Écrire la chaîne suivie d'une nouvelle ligne dans le fichier
    ft_putendl_fd(str, fd);

    // Fermer le fichier
    close(fd);
    return 0;
}