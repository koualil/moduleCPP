/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:52:51 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/08 16:06:25 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
    ClapTrap();
}

ScavTrap::ScavTrap(std::string n):ClapTrap(n)
{
    
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    return (*this = src);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(/* args */)
{
    
}

