/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:36:32 by alicja            #+#    #+#             */
/*   Updated: 2025/03/19 11:57:27 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename) : filename(filename) {}

Sed::~Sed() {}

/* replace:
✅ Otworzyć plik wejściowy i sprawdzić, czy istnieje
✅ Utworzyć nowy plik <filename>.replace
✅ Czytać plik linia po linii
✅ Zamieniać każde wystąpienie s1 na s2 (bez użycia std::string::replace())
✅ Zapisać wynik do nowego pliku
.c_str -> return a const char * points to the null-terminated string*/
void Sed::replace(std::string s1, std::string s2)
{
    std::ifstream inFile(filename.c_str());
    if (!inFile)
    {
        std::cerr << "Error: Cannot open the file." << std::endl;
        return ;
    }
    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile)
    {
        std::cerr << "Error: Cannot create the file." << std::endl;
        return ;
    }
    std::string line;
    while (std::getline(inFile, line))
    {
        size_t position = 0;
        while ((position = line.find(s1, position)) != std::string::npos)
        {
            line = line.substr(0, position) + s2 + line.substr(position + s1.length());
            position += s2.length();
        }
        outFile << line << std::endl;

    }
    inFile.close();
    outFile.close();
}