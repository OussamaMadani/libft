#include "libft.h"
#include<string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size) // size c est la longeur de la chaine comme le compte commande de 0 il faut enlever 1 avec < et il faut ajouter 1 pour s assurer qu il reste un octe pour ajoute le NULL
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

  