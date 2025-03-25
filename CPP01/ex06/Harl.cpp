/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:57:10 by alicja            #+#    #+#             */
/*   Updated: 2025/03/21 10:23:49 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    t_function funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int input = 0;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while(input < 4 && levels[input].compare(level))
        input++;
    if (input >= 4)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    else
    {
        while(input < 4)
        {
            switch(input)
            {
                default:
                    std::cout << "[ " << levels[input] << " ]" << std::endl;
                    (this->*funcs[input])();
                    std::cout << std::endl;
                    break;
            }
            input++;
        }
    }
}