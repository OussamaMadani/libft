#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*Cette fonction ft_substr extrait une sous-chaîne de caractères à partir 
d'une chaîne d'origine, en spécifiant un indice de départ et une longueur.
 Elle alloue dynamiquement la mémoire nécessaire pour la sous-chaîne et
  renvoie un pointeur vers cette sous-chaîne.*/