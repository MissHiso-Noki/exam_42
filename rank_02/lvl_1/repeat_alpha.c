#include <unistd.h>

int repeat_alpha(char c)
{
	int repeat;

	repeat = 0;
	if (c >= 'A' && c <= 'Z')
	{
		repeat = (c - 'A' + 1);
	}
	if (c >= 'a' && c <= 'z')
	{
		repeat = (c - 'a' + 1);
	}
	else
	{
		repeat = 1;
	}
	return (repeat);
}

int	main (int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			j = repeat_alpha(argv[1][i]);
			while (j > 0)
			{
				write(1, &argv[1][i], 1);
				j--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}