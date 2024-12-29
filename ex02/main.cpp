/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 07:08:38 by sasano            #+#    #+#             */
/*   Updated: 2024/12/29 07:20:02 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::string& ref = str;

    std::cout << "String: " << str << std::endl;
    std::cout << "Pointer: " << ptr << std::endl;
    std::cout << "Reference: " << ref << std::endl;

    std::cout << "Address of string: " << &str << std::endl;
    std::cout << "Value pointed by stringPTR: " << *ptr << std::endl;
    std::cout << "Address of reference: " << &ref << std::endl;
    return 0;
}