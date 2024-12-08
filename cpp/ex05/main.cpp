/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:04:45 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/24 16:07:05 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl h;
    h.complain("error");
    h.complain("warning");
    h.complain("info");
    h.complain("debug");
    return 0;
}
