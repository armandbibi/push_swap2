#include <unistd.h>
#include <stdlib.h>

void	ft_puterr(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
