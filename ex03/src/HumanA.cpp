/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 08:01:44 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 08:02:24 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void HumanA::attack() const
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}