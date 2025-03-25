/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:26:02 by alicja            #+#    #+#             */
/*   Updated: 2025/03/18 13:00:03 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(void);
        ~Zombie();
        void announce(void);
        void setName(std::string name);
        
};

Zombie  *zombieHorde(int N, std::string name);

#endif