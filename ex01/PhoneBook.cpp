#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): _last(-1) {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact(void)
{
	if (_last == SIZE - 1)
	{
		for (int i = 0; i < SIZE - 1; i++)
		{
			_contacts[i] = _contacts[i + 1];
			_contacts[i].getIndex(i);
		}
		_contacts[_last].createContact(_last);
	}
	else
	{
		_last++;
		_contacts[_last].createContact(_last);
	}
	std::cout << std::endl;
}


static void	displayHeader(void)
{
	std::string	tab_header;
	std::string	border(44, '-');

	tab_header += "     Index|First Name| Last Name|  Nickname|";
	std::cout << border << std::endl
    << tab_header << std::endl << border << std::endl;
}

void	PhoneBook::searchContact(void)
{
	int	i;
	int	index;
	std::string	index_str;
    std::string border(44, '-');

	if (_last == -1)
	{
		std::cout << "Your phonebook is empty." << std::endl << std::endl;
		return ;
	}
	displayHeader();
	i = -1;
	while (++i <= _last)
    {
		_contacts[i].displayContact();
        std::cout << border << std::endl;
    }
	std::cout << std::endl;
	index = -1;
	while (index < 0 || index > _last)
	{
		std::cout << "Provide a valid index: ";
		std::getline(std::cin, index_str);
		index = std::stoi(index_str);
	}
	_contacts[index].displayContactInfo();
	std::cout << std::endl;
}

