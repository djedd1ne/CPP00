/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:27:08 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/31 17:27:08 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void help_message(){
    std::cout << "Use the following COMMANDS: " << std::endl; 
    std::cout << "ADD : Add a contact to your phonebook." << std::endl;
	std::cout << "SEARCH : Display your phonebook." << std::endl;
	std::cout << "EXIT : Quit the program" << std::endl << std::endl << std::endl;
}

int main(void){
    PhoneBook my_phonebook;
    std::string user_command;

    help_message();
    while (std::getline(std::cin, user_command))
    {
        if (user_command == "ADD")
            my_phonebook.addContact();
        else if (user_command == "SEARCH")
            my_phonebook.searchContact();
        else if (user_command == "EXIT")
        {
            std::cout << "Thank you for using PhoneBook" << std::endl;
            return (0);
        }
        else
            help_message();

    }
    return (0);
}