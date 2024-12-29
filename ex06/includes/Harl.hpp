/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:10:00 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 10:13:22 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        Harl();
        ~Harl();
        void complain( std::string level );
};

#endif