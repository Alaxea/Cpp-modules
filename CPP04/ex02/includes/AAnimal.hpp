/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:10:44 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 22:23:52 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal &animal);
        AAnimal &operator=(const AAnimal &animal);
        virtual ~AAnimal();
        /*pure virtual, nie ma implementacji w klasie parent,
        więc musi zostać zaimplementowana w klasach dziedziczących
        Kiedy klasa ma choć jedną funkcję pure virtual,
        nie można tworzyć obiektów tej klasy – klasa staje się abstrakcyjna*/
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif