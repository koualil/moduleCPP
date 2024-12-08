/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:28:28 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/06 12:47:49 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_W
#define HEADER_W

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    Weapon&     weapon;
    std::string name;
public:
    HumanA(std::string n, Weapon& w);
    void attack();
    ~HumanA();
};

#endif

