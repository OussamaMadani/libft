#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char * dst;

    i = 0;
    j = 0;

    dst = (char *) malloc(sizeof(char)*(ft_strlen(s1)+ft_strlen(s2)+1));
    if (dst == NULL)
    return (NULL);
    while (s1[i])
    {
        dst[i] = s1[i];
        i++;
       
    }
    while (s2[j])
    {
        dst[i + j] = s2[j];
        j++;
    }
    dst[i + j]='\0';
    return (dst);
}