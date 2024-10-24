/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:20:53 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/23 19:45:03 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}


Weapon::Weapon(std::string s)
{
    type = s;
}

void Weapon::setType(std::string s)
{
    type = s;
}

std::string Weapon::getType()
{
    return type;
}

Weapon::~Weapon()
{
}
