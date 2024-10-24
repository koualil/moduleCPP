/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:11:03 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/23 21:30:57 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string n)
{
    name = n;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;    
}

void HumanB::setWeapon(Weapon& w)
{
    weapon = &w;
}

HumanB::~HumanB()
{
}