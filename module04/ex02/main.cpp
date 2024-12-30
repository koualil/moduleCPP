/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:44:58 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/30 15:14:40 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal* animals[4];

    std::cout << "---------------- Dog objects ----------------" << std::endl;
    for(int i=0;i<2;i++)
        animals[i] = new Dog();
    std::cout << "---------------- Cat objects ----------------" << std::endl;
    for(int i=2;i<4;i++)
        animals[i] = new Cat();

    for(int i=0;i<4;i++)
        std::cout << animals[i]->getType() << std::endl;
    // end
    std::cout << "---------------- delete every Animal ----------------" << std::endl;
    for(int i=3 ; i >= 0 ; i--)
        delete animals[i];
 
    return 0;
}
