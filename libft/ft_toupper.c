#include <unistd.h>
void ft_toupper (char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		write(1, str, 1);
		str++;
	}
}
