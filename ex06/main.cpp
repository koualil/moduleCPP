/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:50:00 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/05 22:16:31 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int search_index(std::string levels[], int size, std::string level)
{
    for (int i = 0; i < size; ++i)
    {
        if (levels[i] == level) 
            return i;  
    }
    return -1;
}

void iterate_string(std::string& str)
{
    for (size_t i=0;i<str.length();i++)
        str[i] = (char)std::tolower(str[i]);
}

int main(int argc, char const *argv[])
{
    Harl h;
    if (argc != 2)
    {
        std::cout << "enter a one parameter <level>" << std::endl;
        return 1;
    }
    std::string level = argv[1];
    std::string levels[4] = {"debug", "info", "warning", "error"};
    iterate_string(level);
    int index = search_index(levels, 4,  level);
    switch (index)
    {
    case 0:
        h.complain("debug");
    case 1:
        h.complain("info");
    case 2:
        h.complain("warning");
    case 3:
        h.complain("error");
        break;
    
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
        break;
    }
    return 0;
}
