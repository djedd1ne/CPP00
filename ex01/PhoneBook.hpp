/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:27:28 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/31 17:27:28 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#define SIZE 8

class PhoneBook {
    private:
        int _index;
        int _last;
        Contact _contacts[SIZE];
    
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact();
        void searchContact();
};

#endif