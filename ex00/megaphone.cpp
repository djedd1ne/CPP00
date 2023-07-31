/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:23:48 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/31 14:23:48 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

void str_upper(char *str){
    std::string str_up;

    for(int i = 0; str[i] != '\0'; i++)
        str_up += std::toupper(str[i]);
    std::cout << str_up;
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for(int i = 1; i < ac; ++i)
        str_upper(av[i]);
    std::cout << std::endl;
    return 0;
}
