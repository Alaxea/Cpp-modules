/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:14:28 by alicja            #+#    #+#             */
/*   Updated: 2025/03/26 15:06:52 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int num_value;
        static const int fractional_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &fix);
        Fixed &operator = (const Fixed &fix);
        ~Fixed();
        Fixed(const int integer);
        Fixed(const float floating);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        /*comparison operators- only compare obj so return true or false*/
        bool operator>(Fixed const &next);
        bool operator<(Fixed const &next);
        bool operator>=(Fixed const &next);
        bool operator<=(Fixed const &next);
        bool operator==(Fixed const &next);
        bool operator!=(Fixed const &next);
        /*arithmetic operators- return new obj which stores new result*/
        Fixed operator+(Fixed const &next);
        Fixed operator-(Fixed const &next);
        Fixed operator*(Fixed const &next);
        Fixed operator/(Fixed const &next);
        /*pre/post && increment/decrement*/
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        static Fixed &min(Fixed &num_one, Fixed &num_two);
        static const Fixed &min(Fixed const &num_one, Fixed const &num_two);
        static Fixed &max(Fixed &num_one, Fixed &num_two);
        static const Fixed &max(Fixed const &num_one, Fixed const &num_two);
};

std::ostream &operator<<(std::ostream &output, const Fixed &input);

#endif