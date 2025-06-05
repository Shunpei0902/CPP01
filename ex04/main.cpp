/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 08:30:17 by sasano            #+#    #+#             */
/*   Updated: 2025/06/05 13:43:08 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string customReplace(const std::string &line, const std::string &s1, const std::string &s2)
{
    std::string result;
    size_t pos = 0;
    size_t s1_length = s1.length();
    
    while (true) {
        size_t found = line.find(s1, pos);
        if (found == std::string::npos) {
            result += line.substr(pos);
            break;
        }
        result += line.substr(pos, found - pos) + s2;
        pos = found + s1_length;
    }
    
    return result;
}

int main(int argc, char **argv)
{
    std :: string filename, filename_replace, s1, s2, line;
    
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        std::cerr << "Error: could not open input file '" << filename << "'." << std::endl;
        return 1;
    }
    std::ofstream outFile(filename + ".replace");
    if (!outFile.is_open()) {
        inFile.close();
        std::cerr << "Error: could not open output file '" << filename << ".replace'." << std::endl;
        return 1;
    }
    while (std::getline(inFile, line)) {
        std::string replaced = customReplace(line, s1, s2);
        outFile << replaced << std::endl;
    }

    inFile.close();
    outFile.close();
    return 0;
}