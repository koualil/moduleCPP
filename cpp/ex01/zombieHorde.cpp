/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:30:25 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/02 16:51:43 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    if (N < 1)
	{
		std::cout << "can not contain less than 1 Zombie." << std::endl;
		return (NULL);
	}
    Zombie* z = new Zombie[N];
    for(int i=0;i<N;i++)
    {
        z[i].set_Zombie(name);
    }
    return z;
}