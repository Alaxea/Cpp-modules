/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:03:19 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 16:36:01 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string m_name;
        int m_hitPoints;
        int m_energyPoints;
        int m_attackDamage;

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptrap);
        ClapTrap &operator=(const ClapTrap &claptrap);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif