/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:30:28 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/23 17:18:39 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string n);
    void announce( void );
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump(std::string name);
