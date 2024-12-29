/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 06:01:48 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 07:07:40 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    private:
        std::string name;

    public:
        Zombie();
        Zombie(const std::string name);
        ~Zombie();
        void announce( void );
        void setName(std::string name);

};

Zombie* zombieHorde( int N, std::string name );

#endif