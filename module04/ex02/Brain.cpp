/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:30:55 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/24 13:01:10 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &brain)
    {
        *this = brain;
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}