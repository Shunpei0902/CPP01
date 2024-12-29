/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 05:55:36 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 06:09:31 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    return ;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is dead." << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}