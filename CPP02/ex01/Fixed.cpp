/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 12:11:20 by alicja            #+#    #+#             */
/*   Updated: 2025/03/25 16:46:34 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(fix.getRawBits());
}

/*for example:
fractional_bits = 8
integer = 5
5 << 8 = 5 * 2^8 = 5 * 256 = 1280
num_value = 1280, but in toFloat() will be 5.0*/
Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->num_value = integer << this->fractional_bits;
}

/*for example:
fractional_bits = 8
floating = 5.5
5.5 * 256 = 1408
num_value = 1408, but in toFloat() will be 5.5*/
Fixed::Fixed(const float floating)
{
    std::cout << "Float constructor called" << std::endl;
    this->num_value = (roundf(floating * (1 << this->fractional_bits)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fix)
        this->num_value = fix.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->num_value);
}

void Fixed::setRawBits(int const raw)
{
    this->num_value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->num_value / (1 << this->fractional_bits);
}

int Fixed::toInt(void) const
{
    return (this->num_value >> this->fractional_bits);
}

std::ostream &operator<<(std::ostream &output, const Fixed &input)
{
    output << input.toFloat();
    return output;
}