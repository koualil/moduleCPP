/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:52:48 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/22 19:33:39 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_SCAV
#define HEADER_SCAV

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    /* data */
public:
    ScavTrap();
    ScavTrap(std::string n);
    ScavTrap(const ScavTrap &copy);
    ~ScavTrap();
    
    ScavTrap &operator=(const ScavTrap &src);
    
    void guardGate();
};

 


#endif