/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:41:15 by alicja            #+#    #+#             */
/*   Updated: 2025/03/22 12:16:40 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

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

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif