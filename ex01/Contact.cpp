#include "Contact.hpp"

std::string	Contact::getFirstName() const
{
	return (firstName);
}

std::string	Contact::getLastName() const
{
	return (lastName);
}

std::string	Contact::getNickName() const
{
	return (nickName);
}

std::string	Contact::getPhoneNumber() const
{
	return (phoneNumber);
}

std::string	Contact::getSecret() const
{
	return (secret);
}

//############################################

void	Contact::setFirstName()
{
	while (1)
	{
		std::cout << "First Name: ";
		std::getline(std::cin, firstName);
		if (!firstName.empty())
			return ;
		std::cout << "\033[31m ->Field Can not be empty!\033[0m" << std::endl;
	}
}

void	Contact::setLastName()
{
	while (1)
	{
		std::cout << "Last Name: ";
		std::getline(std::cin, lastName);
		if (!lastName.empty())
			return ;
		std::cout << "\033[31m ->Field Can not be empty!\033[0m" << std::endl;
	}
}

void	Contact::setNickName()
{
	while (1)
	{
		std::cout << "Nick Name: ";
		std::getline(std::cin, nickName);
		if (!nickName.empty())
			return ;
		std::cout << "\033[31m ->Field Can not be empty!\033[0m" << std::endl;
	}
}

void	Contact::setPhoneNumber()
{
	while (1)
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, phoneNumber);
		if (!phoneNumber.empty())
			return ;
		std::cout << "\033[31m ->Field Can not be empty!\033[0m" << std::endl;
	}
}

void	Contact::setSecret()
{
	while (1)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, secret);
		if (!secret.empty())
			return ;
		std::cout << "\033[31m ->Field Can not be empty!\033[0m" << std::endl;
	}
}

//############################################

std::string	Contact::getShortFirstName() const
{
	if (firstName.length() >= 10)
		return (firstName.substr(0, 9) + ".");
	return (firstName + std::string(10 - firstName.length(), ' '));
}

std::string	Contact::getShortLastName() const
{
	if (lastName.length() >= 10)
		return (lastName.substr(0, 9) + ".");
	return (lastName + std::string(10 - lastName.length(), ' '));
}

std::string	Contact::getShortNickName() const
{
	if (nickName.length() >= 10)
		return (nickName.substr(0, 9) + ".");
	return (nickName + std::string(10 - nickName.length(), ' '));
}

std::string	Contact::getShortPhoneNumber() const
{
	if (phoneNumber.length() >= 10)
		return (phoneNumber.substr(0, 9) + ".");
	return (phoneNumber + std::string(10 - phoneNumber.length(), ' '));
}

std::string	Contact::getShortSecret() const
{
	if (secret.length() >= 10)
		return (secret.substr(0, 9) + ".");
	return (secret + std::string(10 - secret.length(), ' '));
}
