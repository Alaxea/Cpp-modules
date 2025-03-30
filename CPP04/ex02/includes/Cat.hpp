/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:10:47 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 22:17:30 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat &cat);
        Cat &operator=(const Cat &cat);
        ~Cat();
        void makeSound() const;
};

#endif