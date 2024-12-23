/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:41:59 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/23 17:56:43 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
#define DOG
#include "Animal.hpp"

class Dog : public Animal
{
private:
    
public:
    Dog();
    Dog(std::string type);
    Dog(const Dog& src);
    ~Dog();

    Dog& operator=(const Dog& src);
    void makeSound() const;
};

#endif