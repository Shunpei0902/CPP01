/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:15:59 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 10:31:00 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return 1;
    }
    harl.complain(argv[1]);
}