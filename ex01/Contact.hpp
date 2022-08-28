#ifndef CONTACT_HPP
# define	CONTACT_HPP

# include <iostream>

class	Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	secret;

public:
	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string	getPhoneNumber() const;
	std::string	getSecret() const;

	void setFirstName();
	void setLastName();
	void setNickName();
	void setPhoneNumber();
	void setSecret();

	std::string	getShortFirstName() const;
	std::string	getShortLastName() const;
	std::string	getShortNickName() const;
	std::string	getShortPhoneNumber() const;
	std::string	getShortSecret() const;
};

#endif
