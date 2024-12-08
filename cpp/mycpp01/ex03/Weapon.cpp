/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:20:53 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/06 18:31:23 by mkoualil         ###   ########.fr       */
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

const std::string& Weapon::getType() const
{
    return type;
}

Weapon::~Weapon()
{
}
