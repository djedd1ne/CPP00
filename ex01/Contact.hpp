#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    private:
        int          _index;
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
        std::string _darkestsecret;
    
    public:
        Contact();
        ~Contact();
        void createContact(int index);
        void displayContact();
        void displayContactInfo();
        void getIndex(int index);
};

#endif