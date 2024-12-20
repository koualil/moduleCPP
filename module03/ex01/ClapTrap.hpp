/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:39:07 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/04 10:10:26 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_CLAP
#define HEADER_CLAP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    /* data */
    std::string Name;
    int          Hit_points;
    int          Energy_points;
    int          Attack_damage;
    
public:
    ClapTrap(/* args */);
    ClapTrap(std::string n);
    ClapTrap(const ClapTrap &copy);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap &operator=(const ClapTrap &src);
    ~ClapTrap();
};


#endif


