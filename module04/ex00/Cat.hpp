/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:20:17 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/23 17:56:31 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
#define CAT
#include "Animal.hpp"

class Cat : public Animal
{
private:
    
public:
    Cat();
    Cat(std::string type);
    Cat(const Cat& src);
    ~Cat();

    Cat& operator=(const Cat& src);
    void makeSound() const;
};

#endif
