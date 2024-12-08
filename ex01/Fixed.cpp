/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:25:31 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/01 11:44:16 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixed_point = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    fixed_point = value << frac_bits;
}

Fixed::Fixed(const float floating_point)
{
    std::cout << "Float constructor called" << std::endl;
    fixed_point = roundf(floating_point * (1 << frac_bits));
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

 

float Fixed::toFloat(void) const
{
    return (float)((float)fixed_point / (float)(1 << frac_bits));
}

int Fixed::toInt( void ) const
{
    return int ((fixed_point) >> frac_bits) ;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        // setRawBits(other.fixed_point);    
        fixed_point = other.fixed_point;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return o;
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