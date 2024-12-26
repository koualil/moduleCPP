/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:52:51 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/21 23:30:43 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "ScavTrap Derived class default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string n):ClapTrap(n)
{
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "ScavTrap Derived class constructor parameter called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
    std::cout << "ScavTrap Derived class copy constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap Derived class Assignation operator called." << std::endl;
    ClapTrap::operator = (src);
    return (*this);
}

void ScavTrap::guardGate()
{ 
    std::cout << Name + " " << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Hit_points <= 0 || Energy_points <= 0)
    {
        std::cout << "can't attack"<<std::endl;
        return;
    }
    std::cout << "ScavTrap "<< Name <<" attacks "<< target << ", causing "<< Attack_damage <<" points of damage!" << std::endl;
    Energy_points--;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Derived class Destructor called" << std::endl;
}

