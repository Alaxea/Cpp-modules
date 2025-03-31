/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:12:34 by alicja            #+#    #+#             */
/*   Updated: 2025/02/17 17:26:10 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

class PhoneBook
{
    private:
        Contact m_contacts[8];

    public:
        PhoneBook();
        ~PhoneBook();

        void exit(void);
        void get_new_contact(int i); 
        void search_contact(int counter);
        int selectContact(int counter);

        // Getter i setter dla pojedynczego kontaktu
        Contact &getContact(int index);
        void setContact(int index, const Contact &contact);
};

#endif