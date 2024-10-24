/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:28:28 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/23 21:09:32 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    Weapon&     weapon;
    std::string name;
public:
    // HumanA();
    HumanA(std::string n, Weapon& w);
    void attack();
    ~HumanA();
};


