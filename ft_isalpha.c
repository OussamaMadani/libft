#include "libft.h"

int	ft_isalpha(int x)
{
	if (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
		return (1);
	return (0);
}