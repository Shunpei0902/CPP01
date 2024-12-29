/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 06:03:29 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 06:56:07 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int getNumber()
{
    int n;

    while (1)
    {
        std::cout << "Enter the number of zombies: ";
        std::cin >> n;
        if (n > 0)
            break;
        std::cout << "Invalid number." << std::endl;
    }
    return n;
}

std::string getName()
{
    std::string name;

    while (1)
    {
        std::cout << "Enter the name of the zombies: ";
        std::cin >> name;
        if (name.length() > 0)
            break;
        std::cout << "Invalid name." << std::endl;
    }
    return name;
}

int main()
{
    Zombie* zombie;
    std::string name;
    int n ;

    while (1)
    {
        n = getNumber();
        name = getName();
        zombie = zombieHorde(n, name);
        for (int i = 0; i < n; i++)
            zombie[i].announce();
        delete[] zombie;
    }
}