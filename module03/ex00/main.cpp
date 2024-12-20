/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:39:05 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/20 12:24:14 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{

    ClapTrap clap("Clappy");

    clap.attack("c1");
    clap.takeDamage(10);
    clap.attack("c1");
    clap.beRepaired(1);
    clap.attack("c1");

    return 0;
}

