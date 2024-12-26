/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:20:56 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/24 13:01:10 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain;
    *type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type):Animal(type)
{
    brain = new Brain;
    std::cout << "Cat paramerized constructor called" << std::endl;
}

Cat::Cat(const Cat& src):Animal(src)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = src;
}

Cat& Cat::operator=(const Cat& src)
{
    if (this != &src)
    {
        Animal::operator=(src);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miu Mui Mui" << std::endl;
}


Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}