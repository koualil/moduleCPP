/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:39:05 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/21 16:43:56 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    // Test ScavTrap
    ScavTrap scav("Guardian");
    scav.attack("Enemy");
    scav.guardGate();

    // Test FragTrap
    FragTrap frag("Destroyer");
    frag.attack("Villain");
    frag.highFivesGuys();

    return 0;
}

