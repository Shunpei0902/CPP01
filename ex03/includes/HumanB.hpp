/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 08:00:17 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 08:00:26 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon& weapon);
        void attack() const;
};

#endif
