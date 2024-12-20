/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:25:31 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/28 14:41:07 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixed_point = 0;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        setRawBits(other.fixed_point);    
        fixed_point = getRawBits();
    }
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl; 
}