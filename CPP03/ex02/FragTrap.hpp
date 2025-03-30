/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:17:43 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 17:03:35 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FARGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &fragtrap);
        FragTrap &operator=(const FragTrap &fragtrap);
        ~FragTrap();
        void highFivesGuys(void);

};

#endif