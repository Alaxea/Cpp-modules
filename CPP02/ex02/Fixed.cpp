/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:14:31 by alicja            #+#    #+#             */
/*   Updated: 2025/03/26 16:56:12 by alicja           ###   ########.fr       */
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

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->num_value = integer << this->fractional_bits;
}

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

bool Fixed::operator>(Fixed const &next)
{
    return (this->getRawBits() > next.getRawBits());
}

bool Fixed::operator<(Fixed const &next)
{
    return (this->getRawBits() < next.getRawBits());
}

bool Fixed::operator>=(Fixed const &next)
{
    return (this->getRawBits() >= next.getRawBits());
}

bool Fixed::operator<=(Fixed const &next)
{
    return (this->getRawBits() <= next.getRawBits());
}

bool Fixed::operator==(Fixed const &next)
{
    return (this->getRawBits() == next.getRawBits());
}

bool Fixed::operator!=(Fixed const &next)
{
    return (this->getRawBits() != next.getRawBits());
}
/*first:zmiana liczb na float
second:operacja
third:zamiana wyniku na fixed-point*/
Fixed Fixed::operator+(Fixed const &next)
{
    return(Fixed(this->toFloat() + next.toFloat()));
}

Fixed Fixed::operator-(Fixed const &next)
{
    return (Fixed(this->toFloat() - next.toFloat()));
}

Fixed Fixed::operator*(Fixed const &next)
{
    return (Fixed(this->toFloat() * next.toFloat()));
}

Fixed Fixed::operator/(Fixed const &next)
{
    return (Fixed(this->toFloat() / next.toFloat()));
}

/*pre-increment*/
Fixed &Fixed::operator++()
{
    this->num_value++;
    return (*this);
}
/*pre-decrement*/
Fixed &Fixed::operator--()
{
    this->num_value--;
    return (*this);
}
/*post-increment*/
Fixed Fixed::operator++(int)
{
    Fixed temp = *this; //copy current obj
    this->num_value++; //increment the value
    return (temp); // return old copy
}
/*post-decrement*/
Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->num_value--;
    return (temp);
}

Fixed &Fixed::min(Fixed &num_one, Fixed &num_two)
{
    if (num_one.getRawBits() < num_two.getRawBits())
        return (num_one);
    return (num_two);
}

const Fixed &Fixed::min(Fixed const &num_one, Fixed const &num_two)
{
    if (num_one.getRawBits() < num_two.getRawBits())
        return (num_one);
    return (num_two);
}

Fixed &Fixed::max(Fixed &num_one, Fixed &num_two)
{
    if (num_one.getRawBits() > num_two.getRawBits())
        return (num_one);
    return (num_two);
}

const Fixed &Fixed::max(Fixed const &num_one, Fixed const &num_two)
{
    if (num_one.getRawBits() > num_two.getRawBits())
        return (num_one);
    return (num_two);
}