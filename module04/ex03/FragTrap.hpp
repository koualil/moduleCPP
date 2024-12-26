/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:03:37 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/22 19:33:45 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_Frag
#define HEADER_Frag

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    
public:
    FragTrap();
    FragTrap(std::string n);
    FragTrap(const FragTrap &copy);
    FragTrap &operator=(const FragTrap &src);

    void highFivesGuys(void);
    
    ~FragTrap();
};


#endif