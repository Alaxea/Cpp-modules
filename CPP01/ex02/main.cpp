/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:00:49 by alicja            #+#    #+#             */
/*   Updated: 2025/03/18 13:21:31 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string myString = "HI THIS IS BRAIN";
    std::string *stringPTR = &myString;
    std::string &stringREF = myString;

    std::cout << "Memory addresses:\n"
                << "Address of the string: " << &myString << "\n"
                << "Address of the pointer: " << stringPTR << "\n"
                << "Address of the reference: " << &stringREF << std::endl;
    std::cout << "The values:\n"
                << "Value of the string: " << myString << "\n"
                << "Value of the pointer: " << *stringPTR << "\n"
                << "Value of the reference: " << stringREF << std::endl;
}