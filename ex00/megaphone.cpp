#include <iostream>

void	toUpper(char *str)
{
	while (*str)
	{
		*str = std::toupper(*str);
		str++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	i = 1;
	while (i < ac)
	{
		toUpper(av[i]);
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
