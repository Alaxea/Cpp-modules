/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:39:40 by alicja            #+#    #+#             */
/*   Updated: 2025/01/10 17:54:29 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;
    char c;

    i = 1;
    j = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                c = argv[i][j];
                if (c >= 'a' && c <= 'z')
                {
                    c = c - 32;
                }
                std::cout << c;
                j++;
            }
            i++;
        }
    }
    std::cout << "\n";
    return (0); 
}