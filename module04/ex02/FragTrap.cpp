/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:03:40 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/21 16:42:49 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Derived class default constructor called." << std::endl;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(std::string n):ClapTrap(n)
{
    std::cout << "FragTrap Derived class parameter constructor called." << std::endl;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy)
{
    std::cout << "FragTrap Derived class Copy Constructor called." << std::endl;
}


FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "FragTrap Derived class Assignation operator called." << std::endl;
    ClapTrap::operator = (src);
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name
              << " requests a high five! Positive vibes only! ✋" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (Hit_points <= 0 || Energy_points <= 0)
    {
        std::cout << "can't attack"<<std::endl;
        return;
    }
    std::cout << "FragTrap "<< Name <<" attacks "<< target << ", causing "<< Attack_damage <<" points of damage!" << std::endl;
    Energy_points--;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Derived class Destructor called" << std::endl;
}
