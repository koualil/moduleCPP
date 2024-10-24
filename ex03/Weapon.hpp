/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:23:06 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/23 19:39:43 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string s);
    void setType(std::string s);
    std::string getType();
    ~Weapon();
};
