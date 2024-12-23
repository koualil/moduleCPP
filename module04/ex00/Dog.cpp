/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:41:57 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/23 17:56:48 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type):Animal(type)
{
    std::cout << "Dog paramerized constructor called" << std::endl;
}

Dog::Dog(const Dog& src):Animal(src)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = src;  
}

Dog& Dog::operator=(const Dog& src)
{
    if (this != &src)
    {
        Animal::operator=(src);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "oh oh oh oh" << std::endl;
}


Dog::~Dog()
{
    std::cout << "Dog Default destructor called" << std::endl;
}