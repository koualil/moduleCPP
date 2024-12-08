/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:51:53 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/06 20:54:15 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n= 5;
    Zombie *z = zombieHorde(n, "zombie");
    if (!z)
        return 1;
    
    for(int i=0; i<n;i++)
    {
        z[i].announce();
    }
    delete[] z;
    return 0;
}
