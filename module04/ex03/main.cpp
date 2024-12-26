/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:39:05 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/22 18:43:48 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    // Test DiamondTrap
    DiamondTrap diamond("Ultimate");

    diamond.attack("Enemy");
    diamond.whoAmI();



  
    return 0;
}
