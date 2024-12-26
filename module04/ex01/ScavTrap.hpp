/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:52:48 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/21 23:31:06 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_SCAV
#define HEADER_SCAV

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap();
    ScavTrap(std::string n);
    ScavTrap(const ScavTrap &copy);
    ScavTrap &operator=(const ScavTrap &src);
    ~ScavTrap();
    
    void attack(const std::string& target);
    void guardGate();
};

 


#endif

