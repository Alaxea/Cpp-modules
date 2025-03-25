/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:36:36 by alicja            #+#    #+#             */
/*   Updated: 2025/03/19 11:43:00 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <string>

class Sed
{
    private:
        std::string inFile;
        std::string outFile;
        std::string filename;
    public:
        Sed(std::string filename);
        ~Sed();
    
    void replace(std::string s1, std::string s2);
};


#endif