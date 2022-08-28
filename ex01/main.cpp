#include "DeadBook.h"

int main()
{
	PhoneBook	phoneBook;
	std::string	command;

	std::cout << "\033[32mCommands: ADD, SEARCH, EXIT \033[0m" << std::endl;
	while (1)
	{
		std::cout << "\033[33m💀DEAD BOOK💀: \033[0m";
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
		{
			phoneBook.addContact();
		}
		else if (!command.compare("SEARCH"))
		{
			phoneBook.searchContact();
		}
		else if (!command.compare("EXIT"))
		{
			break ;
		}
		else
		{
			std::cout << "\033[32mCommands: ADD, SEARCH, EXIT \033[0m" << std::endl;
		}
	}
	return (0);
}
