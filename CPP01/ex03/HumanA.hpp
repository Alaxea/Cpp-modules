/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:30:58 by alicja            #+#    #+#             */
/*   Updated: 2025/03/18 19:25:09 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
        HumanA();
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);

    void attack(void) const;
};