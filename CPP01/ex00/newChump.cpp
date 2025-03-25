/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newChump.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:17:25 by alicja            #+#    #+#             */
/*   Updated: 2025/03/17 17:58:29 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announcement();
}