/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 07:59:56 by sasano            #+#    #+#             */
/*   Updated: 2025/06/05 13:32:21 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon& weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack() const;
};

#endif