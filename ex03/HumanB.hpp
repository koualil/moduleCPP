/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:09:50 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/23 21:30:43 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

// i use pointer for ignoring problem of initialzing reference
class HumanB
{
private:
    Weapon*     weapon;
    std::string name;
public:
    HumanB(std::string n);
    void setWeapon(Weapon& w);
    void attack();
    ~HumanB();
};


