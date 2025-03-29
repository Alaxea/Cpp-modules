/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:23:37 by alicja            #+#    #+#             */
/*   Updated: 2025/03/29 21:07:18 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
/*virtual-w przypadku wielokrotnego dziedziczenia zapewnia, że tylko jedna kopia
klasy bazowej będzie dostepna w klasie pochodnej, a nie wiele*/
class ScavTrap : virtual public ClapTrap
{
    private:

    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scavtrap);
        ScavTrap &operator=(const ScavTrap &scavtrap);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
};

#endif