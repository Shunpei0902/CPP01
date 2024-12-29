/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 08:30:17 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 08:54:24 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std :: string filename, filename_replace, s1, s2, line;
    
    if (argc != 4)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return 1;
    }
    filename = argv[1];
    filename_replace = filename + ".replace";
    s1 = argv[2];
    s2 = argv[3];

    std::ifstream inFile(s1);
    if (!inFile) {
        std::cerr << "Failed to open source file." << std::endl;
        return 1;
    }
    std::ofstream outFile(s2);
    if (!outFile) {
        std::cerr << "Failed to open destination file." << std::endl;
        return 1;
    }
    while (std::getline(inFile, line)) {
        outFile << line << std::endl;
    }
    return 0;
}