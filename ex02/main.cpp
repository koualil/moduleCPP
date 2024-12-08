/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:21:07 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/06 17:41:33 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
int main()
{
    std::string my_str("HI THIS IS BRAIN");
    std::string* my_str_pt = &my_str;
    std::string& my_str_ref = my_str;
    
    std::cout << "Address of variables my_str is : "<< &my_str << std::endl;
    std::cout << "Address of variables my_str_pt is : "<< my_str_pt << std::endl;
    std::cout << "Address of variables my_str_ref is : "<< &my_str_ref << std::endl;
    std::cout << std::endl;
    std::cout << "Value of variables my_str is : "<< my_str << std::endl;
    std::cout << "Value of variables my_str_pt is : "<< *my_str_pt << std::endl;
    std::cout << "Value of variables my_str_ref is : "<< my_str_ref << std::endl;
    return 0;
}
