/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 00:19:52 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/24 15:03:07 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL

#include "iostream"
#include <string>

class Animal
{
protected:
    std::string* type;
public:
    Animal();
    Animal( std::string type);
    Animal(const Animal& copy);
    virtual ~Animal();

    // operator 
    Animal &operator=(const Animal& src);
   
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif
