int ft_isalpha (int c)
{
	if (c >= 48 && c <= 57)
        {
                return (c);
	}
	else if (c >= 65 && c <= 90)
	{
		return (c);
	}
	else if (c >= 97 && c <= 122)
	{
		return (c);
	}
	return (0);
}
