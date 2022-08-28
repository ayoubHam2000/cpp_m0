#include "PhoneBook.hpp"

void	PhoneBook::addContact()
{
	int	i;

	i = index % 8;
	contacts[i].setFirstName();
	contacts[i].setLastName();
	contacts[i].setNickName();
	contacts[i].setPhoneNumber();
	contacts[i].setSecret();
	index++;
}

void	PhoneBook::searchContact()
{
	int			i;
	std::string	s;

	if (index == 0)
	{
		std::cout << "\033[32mList is empty\033[0m" << std::endl;
		return ;
	}

	i = 0;
	std::cout << "\033[32mIndex     |First Name|Last Name |Nickname  |Phone Nbr |Secret    \033[0m" << std::endl;
	while (i < index && i < MAX_CNT)
	{
		std::cout << i + 1 << "         |";
		std::cout << contacts[i].getShortFirstName() << "|";
		std::cout << contacts[i].getShortLastName() << "|";
		std::cout << contacts[i].getShortNickName() << "|";
		std::cout << contacts[i].getShortPhoneNumber() << "|";
		std::cout << contacts[i].getShortSecret() << std::endl;
		i++;
	}

	std::cout << "Index: ";
	std::getline(std::cin, s);
	i = std::atoi(s.c_str());
	i--;
	if (i < index && i < MAX_CNT && i >= 0)
	{
		std::cout << "----------------" << std::endl;
		std::cout << "First name: " << contacts[i].getFirstName() << std::endl;
		std::cout << "Last name: " << contacts[i].getLastName() << std::endl;
		std::cout << "Nick name: " << contacts[i].getNickName() << std::endl;
		std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[i].getSecret() << std::endl;
		std::cout << "----------------" << std::endl;
	}
	else
	{
		std::cout << "\033[31m Invalid Index\033[0m" << std::endl;
	}
}
