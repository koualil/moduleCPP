/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:51:53 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/23 17:25:23 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void foo()
// {
//     system("leaks Zombie");
// }

int main(void)
{
    // atexit(foo);
    Zombie *z1 = newZombie("Heap_Zombie");
    z1->announce();

    randomChump("random_Zombie!!!");
    delete z1;
    
    return 0;
}
