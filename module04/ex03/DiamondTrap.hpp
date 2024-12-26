/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:56:27 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/22 20:47:31 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_DIAMOND
#define HEADER_DIAMOND

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public  FragTrap, public ScavTrap
{
private:
    std::string Name;
    
public:
    DiamondTrap();
    DiamondTrap(const std::string& Name);
    DiamondTrap(const DiamondTrap &copy);
    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &src);

    void attack(const std::string &target);
    void whoAmI();
};

 


#endif