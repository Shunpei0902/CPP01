/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 07:57:07 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 08:00:29 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
    private:
        std::string type;

    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType() const;
        void setType(std::string type);
};

#endif