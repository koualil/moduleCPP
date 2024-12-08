/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:23:06 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/06 18:30:50 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_WW
#define HEADER_WW
#include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string s);
    void setType(std::string s);
    const std::string& getType() const;
    ~Weapon();
};
#endif