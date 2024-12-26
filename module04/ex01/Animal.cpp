/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 00:20:16 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/24 16:41:05 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(/* args */)
{
    type = new std::string;
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal paramerized constructor called" << std::endl;
    this->type = new std::string(type);
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
	// *this = copy;
    type = new std::string(*copy.type);
}

Animal &Animal::operator=(const Animal& src)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}


std::string Animal::getType() const
{
    return *type;
}

void Animal::makeSound() const
{
    std::cout << "sound of animal" << std::endl;
}

Animal::~Animal()
{
    delete type;
    std::cout << "Animal destructor called" << std::endl;
}