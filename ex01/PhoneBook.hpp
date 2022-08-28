#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define MAX_CNT 8
# include "Contact.hpp"

class PhoneBook
{
private:
	int		index;
	Contact	contacts[MAX_CNT];

public:
	PhoneBook():index(0){};
	void	addContact();
	void	searchContact();
};

#endif
