int ft_sascii (int c)
{
	if (c >= 0 && c <= 127)
	{
		return c;
	}
	return (0);
}
