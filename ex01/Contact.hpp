/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:12:20 by alicja            #+#    #+#             */
/*   Updated: 2025/02/06 11:14:18 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string m_firstName;
        std::string m_lastName;
        std::string m_nickname;
        std::string m_phoneNumber;
        std::string m_darkestSecret;

    public:
        Contact();
        ~Contact();

        void setFirstName(const std::string firstName);
        void setLastName(const std::string lastName);
        void setNickname(const std::string nickname);
        void setPhoneNumber(const std::string number);
        void setDarkestSecret(const std::string secret);

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
        
};

#endif