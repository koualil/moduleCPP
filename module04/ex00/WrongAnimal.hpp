/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:03:22 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/23 17:13:00 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
    
public:
    WrongAnimal();
    WrongAnimal(std::string );
    WrongAnimal(const WrongAnimal& copy);
    ~WrongAnimal();

    WrongAnimal& operator=(const WrongAnimal& src);

    void makeSound() const;
    std::string getType() const;
};

#endif 