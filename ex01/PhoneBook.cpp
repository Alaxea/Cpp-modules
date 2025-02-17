/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:57:41 by alicja            #+#    #+#             */
/*   Updated: 2025/02/17 17:27:33 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

bool stringToInt(const std::string &str, int &result)
{
    if (str.empty())
        return (false);

    size_t start = 0;
    size_t end = str.length() - 1;

    // Ignoruj białe znaki na początku
    while (start <= end && isspace(str[start]))
        start++;
    // Ignoruj białe znaki na końcu
    while (end >= start && isspace(str[end]))
        end--;
    if (start > end)
        return (false); // Ciąg zawiera tylko białe znaki
    int value = 0;
    for (size_t i = start; i <= end; ++i)
    {
        if (!isdigit(str[i]))
            return (false);
        int digit = str[i] - '0';
        if (value > (std::numeric_limits<int>::max() - digit) / 10)
            return (false); // Przekroczenie zakresu
        value = value * 10 + digit;
    }
    result = value;
    return (true);
}

bool checkInput(std::string const &input, int counter)
{
    if (input.empty())
        return (false);
    int index;
    if (!stringToInt(input, index))
        return (false);
    if (index < 1 || index > counter)
        return (false);
    return (true);
}

std::string get_substr(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    else
        return (str);
}

int PhoneBook::selectContact(int counter)
{
    int i = 0;
    std::string input;
    std::string begin = "*-------*----------*----------*----------*";
    std::string header_table = "| INDEX |FIRST NAME|LAST NAME | NICKNAME |";
    std::cout << std::endl << begin << std::endl << header_table << std::endl;
    while (i < counter)
    {
        std::cout << begin << std::endl << std::left
                  << "|   " << i + 1 << "   |"
                  << std::setw(10) << get_substr(m_contacts[i].getFirstName()) << "|"
                  << std::setw(10) << get_substr(m_contacts[i].getLastName()) << "|"
                  << std::setw(10) << get_substr(m_contacts[i].getNickname()) << "|"
                  << std::endl;
        i++;
    }
    std::cout << begin << std::endl;
    while (true)
    {
        std::cout << "Enter the index of the contact you want to display: " << std::endl;
        std::getline(std::cin, input);
        int index;
        if (stringToInt(input, index) && index >= 1 && index <= counter)
        {
            i = index;
            break;
        }
        else
            std::cout << "Error: Invalid input." << std::endl;
    }
    return (i);
}

void PhoneBook::setContact(int index, const Contact &contact) 
{
    if (index >= 0 && index < 8) 
    {
        m_contacts[index] = contact;
    }
}

Contact &PhoneBook::getContact(int index)
{
    return m_contacts[index];
}

void PhoneBook::search_contact(int counter)
{
    int index = 0;
    if (counter == 0)
    {
        std::cout << "Error: Nothing to search" << std::endl;
        return;
    }
    index = selectContact(counter) - 1;
    std::cout << "First name: " << m_contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << m_contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << m_contacts[index].getNickname() << std::endl;
    std::cout << "Phone number: " << m_contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << m_contacts[index].getDarkestSecret() << std::endl;
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
void PhoneBook::get_new_contact(int i)
{
    std::string input;

    std::cout << "Enter first name: " << std::endl;
    if (!std::getline(std::cin, input) || std::cin.eof()) return;
    m_contacts[i].setFirstName(input);

    std::cout << "Enter last name: " << std::endl;
    if (!std::getline(std::cin, input) || std::cin.eof()) return;
    m_contacts[i].setLastName(input);

    std::cout << "Enter nickname: " << std::endl;
    if (!std::getline(std::cin, input) || std::cin.eof()) return;
    m_contacts[i].setNickname(input);

    std::cout << "Enter darkest secret: " << std::endl;
    if (!std::getline(std::cin, input) || std::cin.eof()) return;
    m_contacts[i].setDarkestSecret(input);
    while (true)
    {
        std::cout << "Enter the phone number: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof()) return;
        if (check_digit(input))
            std::cout << "Error: Invalid phone number." << std::endl;
        else
        {
            m_contacts[i].setPhoneNumber(input);
            break;
        }
    }
}

void PhoneBook::exit()
{
    std::cout << "Goodbye! Thank you for using Phonebook!" << std::endl;
    ::exit(0);
}
