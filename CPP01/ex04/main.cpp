/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:36:25 by alicja            #+#    #+#             */
/*   Updated: 2025/03/19 11:27:00 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Try this: ./Sed <filename> <s1> <s2>." << std::endl;
        return 1;
    }
    else
    {
        Sed sed(argv[1]);
        sed.replace(argv[2], argv[3]);

    }
}