/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 12:11:20 by alicja            #+#    #+#             */
/*   Updated: 2025/03/25 08:51:17 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor created" << std::endl;
    this->setRawBits(0);
}

Fixed::~Fixed()
{
    std::cout << "Destructor created" << std::endl;
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor created" << std::endl;
    this->setRawBits(fix.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    std::cout << "Copy assignment operator created" << std::endl;
    this->setRawBits(fix.getRawBits());
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->num_value);
}

void Fixed::setRawBits(int const raw)
{
    this->num_value = raw;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor created" << std::endl;
    this->num_value = integer << this->fractional_bits;
}

Fixed::Fixed(const float floating)
{
    std::cout << "Floating-point constructor created" << std::endl;
    this->num_value = floating * (1 << this->fractional_bits);
}

int Fixed::toInt(void) const
{

}

float Fixed::toFloat(void) const
{
    
}

std::ostream &operator<<(std::ostream &output, const Fixed &fix)
{
    
}