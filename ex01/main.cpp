/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:12:01 by alicja            #+#    #+#             */
/*   Updated: 2025/02/08 19:33:47 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook book;
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
            phoneBook.get_new_contact(book.m_contacts, i);
            i++;
            counter++;
        }
        else if (input == "SEARCH")
        {
            if (counter > 8)
                phoneBook.search_contact(book.m_contacts, 8);
            else
                phoneBook.search_contact(book.m_contacts, i);
        }
        else if (input == "EXIT")
            phoneBook.out();
        else
            std::cout << "Error: Invalid command." << std::endl;
    }
    return (0);
}