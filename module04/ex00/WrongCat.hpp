/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:01:52 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/23 17:16:40 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongCat_HPP
#define WRONGWrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    
public:
    WrongCat();
    WrongCat(std::string type);
    WrongCat(const WrongCat& src);
    ~WrongCat();

    WrongCat& operator=(const WrongCat& src);
    void makeSound() const;
    std::string getType() const;
};

#endif
