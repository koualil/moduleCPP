/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:44:58 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/24 15:13:02 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void foo()
{
    system("leaks Animal");
}
int main(void)
{
    // atexit(foo);
    
    Animal* animals[4];

    for(int i=0;i<2;i++)
        animals[i] = new Dog();
    for(int i=2;i<4;i++)
        animals[i] = new Cat();

     
    // end
    for(int i=3 ; i >= 0 ; i--)
        delete animals[i];
 
    return 0;
}
