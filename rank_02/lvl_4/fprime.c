void	fprime(int nbr)
{
	int	check;

	check = 2;
	if (nbr == 1)
	{
		printf("1");
		return ;
	}
	while (nbr >= check)
	{
		if ((nbr % check) == 0)
		{
			printf("%d", check);
			if (nbr != check)
				printf("*");
			nbr /= check;
			check--;
		}
		check++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}