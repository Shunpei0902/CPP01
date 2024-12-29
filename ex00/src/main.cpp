/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 05:53:47 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 06:44:53 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombie;

    zombie = newZombie("Zombie1");
    zombie->announce();
    randomChump("Zombie2");
    delete zombie;
    return 0;
}