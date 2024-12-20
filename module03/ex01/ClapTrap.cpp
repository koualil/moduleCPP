/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:39:10 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/04 10:07:55 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
    std::cout << "Default constructor called" << std::endl;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ClapTrap::ClapTrap(std::string n)
{
    std::cout << "constructor with parameter" << std::endl;
    Name = n;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Assignation operator called" << std::endl;
    if (&src != this)
    {
        this->Name = src.Name;
        this->Hit_points = src.Hit_points;
        this->Energy_points = src.Energy_points;
        this->Attack_damage = src.Attack_damage;
    }
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points < 0 || Energy_points < 0)
    {
        std::cout << "can't attack"<<std::endl;
        return;
    }
    std::cout << "ClapTrap "<< Name <<" attacks "<< target << ", causing "<< Attack_damage <<" points of damage!" << std::endl;
    Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_points == 0)
	{
		std::cout << "ClapTrap " << Name << " already dead" << std::endl;
		return ;
	}
	if (Hit_points < amount)
		Hit_points = 0;
	else 
		Hit_points -= amount;
    std::cout << "ClapTrap "<< Name <<" takes "<< amount <<" points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy_points == 0)
	{
		std::cout << "ClapTrap " << Name << " has no points left" << std::endl;
		return ;
	}
    Hit_points += amount;
    Energy_points--;
    std::cout << "ClapTrap "<<Name<< "repairs itself, recovering "<< amount<<" hit points!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

//Comment un modèle de machine learning comprend-il les informations d'une image ?
//les pixels presentent des informations ?
/*


*/