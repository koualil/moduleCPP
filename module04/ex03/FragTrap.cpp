/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:03:40 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/22 18:40:12 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "FragTrap Derived class default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string n):ClapTrap(n)
{
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "FragTrap Derived class parameter constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy)
{
    std::cout << "FragTrap Derived class copy constructor called." << std::endl;
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Derived class Destructor called" << std::endl;
}



