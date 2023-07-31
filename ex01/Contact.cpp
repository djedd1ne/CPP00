/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:27:13 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/31 17:27:13 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

static bool str_is_number(std::string str){
    for (int i = 0; str[i]; i++)
        if (!isdigit(str[i]))
            return false;
    return true;
}

void Contact::createContact(int index){
    _index = index;
    std::cout << "Enter Fitst name ";
    std::getline(std::cin, _firstname, '\n');
    std::cout << "Last name ";
	std::getline(std::cin, _lastname, '\n');
	std::cout << "Nickname ";
	std::getline(std::cin, _nickname, '\n');
	std::cout << "Phone number ";
	std::getline(std::cin, _phonenumber, '\n');
    while (str_is_number(_phonenumber) == false)
    {
        std::cout << "Enter Only numbers, Try again" << std::endl;
        std::cout << "Phone number ";
	    std::getline(std::cin, _phonenumber, '\n');
    }
	std::cout << "Darkest secret  ";
	std::getline(std::cin, _darkestsecret, '\n');
}
void Contact::getIndex(int index){
    _index = index;
}
static std::string displayTen(std::string str){
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}
static void displayColumn(std::string str) {
    std::cout << std::right << std::setw(10) << displayTen(str)
    << "|";
}

void Contact::displayContact() {
    std::string index = "";
    
    index += _index + '0';
    displayColumn(index);
    displayColumn(_firstname);
    displayColumn(_lastname);
    displayColumn(_nickname);
    std::cout << std::endl;
}

void Contact::displayContactInfo() {
	std::cout << std::setw(18) << "First name   " << _firstname << std::endl;
	std::cout << std::setw(18) << "Last name   " << _lastname << std::endl;
	std::cout << std::setw(18) << "Nickname   " << _nickname << std::endl;
	std::cout << std::setw(18) << "Phone number   " << _phonenumber << std::endl;
	std::cout << std::setw(18)<< "Darkest secret   " << _darkestsecret << std::endl;;
}
