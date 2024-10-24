/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:51:53 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/23 18:17:07 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void foo()
// {
//     system("leaks Zombie");
// }

int main(void)
{

    int n= 5;
    // atexit(foo);
    Zombie *z = zombieHorde(n, "hello");
    if (!z)
        return 1;
    for(int i=0;i<n;i++)
    {
        z[i].announce();
    }
    delete[] z;
    return 0;
}
