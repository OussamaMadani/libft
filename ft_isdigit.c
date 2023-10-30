#include "libft.h"

int	ft_isdigit(int x)
{
	while ('0' <= x && x <= '9')
		return (1);
	return (0);
}