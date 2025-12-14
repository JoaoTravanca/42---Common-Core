#include <stdio.h>
int ft_atoi (const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
			|| *nptr == '\r' || *nptr == '\f' ||*nptr == '\v')
	{
		nptr ++;
	}
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		{
			sign *= -1;
		}
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (result * 10) + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

int main (void)
{
	char	*nptr= "23432343";

	int result = ft_atoi (nptr);
	printf("O resultado era %s e passou para %d", nptr, result);
	return (0);
}
