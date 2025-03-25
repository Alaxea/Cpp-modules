/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:57:18 by alicja            #+#    #+#             */
/*   Updated: 2025/03/21 10:07:52 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Try this: ./harlFilter <level>" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string input = argv[1];
    Harl harl;
    harl.complain(input);
    return (EXIT_SUCCESS);

}