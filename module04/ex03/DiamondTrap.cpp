/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:56:30 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/22 18:30:26 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 30;
    std::cout << "DiamondTrap Derived class default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& Name): ClapTrap(Name + "_clap_name"), FragTrap(Name), ScavTrap(Name), Name(Name)
{
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 30;
    std::cout << "DiamondTrap Derived class parameter constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy):ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    Name = copy.Name;
    std::cout << "DiamondTrap Derived class copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    if (this != &src)
    {
        this->Name = src.Name;
        ClapTrap::Name = src.ClapTrap::Name;
        ClapTrap::operator=(src);
    }
    std::cout << "DiamondTrap Derived class Assignation operator called." << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->Name
              << ", ClapTrap name: " << ClapTrap::Name << std::endl;
}

