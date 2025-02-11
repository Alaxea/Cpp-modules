/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:12:34 by alicja            #+#    #+#             */
/*   Updated: 2025/02/06 14:41:57 by alicja           ###   ########.fr       */
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
        int counter;

    public:
        Contact m_contacts[8];
        PhoneBook();
        ~PhoneBook();

        void out(void);
        void get_new_contact(Contact *book, int i);
        void search_contact(Contact *book, int counter);
};

#endif