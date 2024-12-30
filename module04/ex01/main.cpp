/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:44:58 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/30 14:48:31 by mkoualil         ###   ########.fr       */
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

     
    // end
    std::cout << "---------------- delete every Animal ----------------" << std::endl;
    for(int i=3 ; i >= 0 ; i--)
        delete animals[i];
 
    // test Deep Copy vd Shallow Copy
    // Animal *a1 = new Animal("cat");

    // Animal a2(*a1);

    // std::cout << a2.getType() << std::endl;
    // a2.setAnimal("Dog");
    // std::cout << a2.getType() << std::endl;
    // std::cout << a1->getType() << std::endl;

    // delete a1;
    return 0;
}
