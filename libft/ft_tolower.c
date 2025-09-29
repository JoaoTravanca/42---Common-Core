#include <unistd.h>
void ft_tolower (char *str)
{                                                                                                                               while (*str)
        {
                if (*str >= 'A' && *str <= 'Z')
                {
                        *str += 32;
                }
                write(1, str, 1);
                str++;
        }
}
