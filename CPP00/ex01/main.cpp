/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <astefans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:12:01 by alicja            #+#    #+#             */
/*   Updated: 2025/02/17 17:45:00 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phoneBook;
    std::string input;
    int i = 0;
    int counter = 0;

    while(true)
    {
        std::cout << "Hello! Welcome to the phonebook!\n" 
                << "You can use the following commands:\n" 
                << "ADD: to add a new contact\n" 
                << "SEARCH: to search for a contact\n" 
                << "EXIT: to exit the phonebook\n" << std::endl;
        std::cout << "Enter a command: " << std::endl;
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            if (i == 8)
            {
                std::cout << "Error: Phonebook is full." << std::endl;
                i = 0;
            }
            phoneBook.get_new_contact(i);
            i++;
            if (counter < 8)
                counter++;
        }
        else if (input == "SEARCH")
        {
            phoneBook.search_contact(counter);
        }
        else if (input == "EXIT")
        {
            phoneBook.exit();
            break;
        }
        else
            std::cout << "Error: Invalid command.\n" << std::endl;
    }
    return (0);
}