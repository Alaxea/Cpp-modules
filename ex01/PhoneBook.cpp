/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:57:41 by alicja            #+#    #+#             */
/*   Updated: 2025/02/08 19:33:05 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <cstdio>
#include <cctype>

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

bool checkInput(std::string const input, int counter)
{
    size_t pos;
    if(input.empty())
            return (false);
    int32_t index;
    try
    {
        index = std::stoi(input, &pos);
        if (pos != input.length())
            return (false);
        if (index < 1 || index > counter)
            return (false);
    }
    catch (std::exception &e)
    {
        return (false);
    }
    return (true);
}

std::string substr(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    else
        return (str);
}

int selectContact(Contact *book, int counter)
{
    int i = 0;
    std::string input;
    std::string begin = "*-------*----------*----------*----------*";
    std::string header_table = "| INDEX |FIRST NAME|LAST NAME | NICKNAME |";
    std::cout << std::endl << begin << std::endl << header_table << std::endl;
    while(i < counter)
    {
        std::cout << begin << std::endl << std::left
                    << "|   " << i + 1 << "   |"
                    << std::setw(10) << substr(book[i].getFirstName()) << "|"
                    << std::setw(10) << substr(book[i].getLastName()) << "|"
                    << std::setw(10) << substr(book[i].getNickname()) << "|"
                    << std::endl;
        i++;
    }
    std::cout << begin << std::endl;
    while (true)
    {
        std::cout << "Enter the index of the contact you want to display: " << std::endl;
        std::getline(std::cin, input);
        if (checkInput(input, counter))
        {
            i = std::stoi(input);
            break;
        }
        else
            std::cout << "Error: Invalid input." << std::endl;
    }
    return (i);
}


void PhoneBook::search_contact(Contact *book, int counter)
{
    int index = 0;
    if (counter == 0)
    {
        std::cout << "Error: Nothing to search" << std::endl;
        return;
    }
    index = selectContact(book, counter) - 1;
    std::cout << "First name: " << book[index].getFirstName() << std::endl;
    std::cout << "Last name: " << book[index].getLastName() << std::endl;
    std::cout << "Nickname: " << book[index].getNickname() << std::endl;
    std::cout << "Phone number: " << book[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << book[index].getDarkestSecret() << std::endl;
}

int check_digit(std::string input)
{
    int check;
    
    for (size_t i = 0; i < input.length(); i++)
    {
        check = isdigit(input[i]);
        if (!check)
            return (1);
    }
    return (0);
}
// get new contact
void PhoneBook::get_new_contact(Contact *book, int i)
{
    std::string input;
    
    std::cout << "Enter first name: " << std::endl;
    std::getline(std::cin, input);
    book[i].setFirstName(input);
    if (std::cin.eof())
        exit(0);
    std::cout << "Enter last name: " << std::endl;
    std::getline(std::cin, input);
    book[i].setLastName(input);
    if (std::cin.eof())
        exit(0);
    std::cout << "Enter nickname: " << std::endl;
    std::getline(std::cin, input);
    book[i].setNickname(input);
    if (std::cin.eof())
        exit(0);
    std::cout << "Enter darkest secret: " << std::endl;
    std::getline(std::cin, input);
    book[i].setDarkestSecret(input);
    if (std::cin.eof())
        exit(0);
    while (true)
    {
        std::cout << "Enter the phone number: " << std::endl;
        std::getline (std::cin, input);
        if (check_digit(input))
            std::cout << "Error: Invalid phone number." << std::endl;
        else
        {
            book[i].setPhoneNumber(input);
            if (std::cin.eof())
                exit(0);
            break;
        }
    }
}

void PhoneBook::out(void)
{
    std::cout << "Goodbye! Thank you for using Phonebook!" << std::endl;
    exit(0);
}
