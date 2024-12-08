/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:09:50 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/06 18:16:29 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HU
#define HEADER_HU

#include "HumanA.hpp"
#include <iostream>

class HumanB
{
private:
    Weapon *weapon;
    std::string name;

public:
    HumanB(std::string n);
    void setWeapon(Weapon &w);
    void attack();
    ~HumanB();
};

#endif
