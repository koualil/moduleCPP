/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:01:49 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/24 13:01:10 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type):WrongAnimal(type)
{
    std::cout << "WrongCat paramerized constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src):WrongAnimal(src)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = src;  
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
    if (this != &src)
    {
        WrongAnimal::operator=(src);
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Miu Mui Mui" << std::endl;
}

std::string WrongCat::getType() const
{
    return type;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}