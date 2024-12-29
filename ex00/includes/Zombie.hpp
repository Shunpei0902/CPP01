/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 05:53:53 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 06:29:39 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZONEBIE_HPP
# define ZONEBIE_HPP

# include <iostream>

class Zombie {
    private:
        std::string name;

    public:
        Zombie();
        Zombie(const std::string name);
        ~Zombie();
        void announce( void );

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif