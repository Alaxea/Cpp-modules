/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 12:11:23 by alicja            #+#    #+#             */
/*   Updated: 2025/03/22 13:04:16 by alicja           ###   ########.fr       */
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

        friend std::ostream &operator<<(std::ostream &output, const Fixed &fix);
};

#endif