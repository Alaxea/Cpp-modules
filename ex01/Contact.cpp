/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:57:59 by alicja            #+#    #+#             */
/*   Updated: 2025/02/06 12:37:15 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>

Contact::Contact()
    : m_firstName(""), m_lastName(""), m_nickname(""), m_phoneNumber(""), m_darkestSecret("") {}

Contact::~Contact() {}

void Contact::setFirstName(const std::string firstName)
{
    this->m_firstName = firstName;
}

void Contact::setLastName(const std::string lastName)
{
    this->m_lastName = lastName;
}

void Contact::setNickname(const std::string nickname)
{
    this->m_nickname = nickname;
}

void Contact::setPhoneNumber(const std::string number)
{
    this->m_phoneNumber = number;
}

void Contact::setDarkestSecret(const std::string secret)
{
    this->m_darkestSecret = secret;
}

std::string Contact::getFirstName() const
{
    return this->m_firstName;
}

std::string Contact::getLastName() const
{
    return this->m_lastName;
}

std::string Contact::getNickname() const
{
    return this->m_nickname;
}

std::string Contact::getPhoneNumber() const
{
    return this->m_phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return this->m_darkestSecret;
}