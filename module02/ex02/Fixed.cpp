/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:25:31 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/02 17:28:50 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
}

Fixed::Fixed(const int value)
{
    fixed_point = value << frac_bits;
}

Fixed::Fixed(const float floating_point)
{
    fixed_point = roundf(floating_point * (1 << frac_bits));
}

Fixed::Fixed(const Fixed &f)
{
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
    if (this != &other)
    {
        // setRawBits(other.fixed_point);    
        fixed_point = other.fixed_point;
    }
    return *this;
}

bool Fixed::operator<(const Fixed& other)
{
    return (fixed_point < other.fixed_point);
        
}

bool Fixed::operator>(const Fixed& other)
{
    return (fixed_point > other.fixed_point);
}

bool Fixed::operator<=(const Fixed& other)
{
    return (fixed_point <= other.fixed_point);
}

bool Fixed::operator>=(const Fixed& other)
{
    return (fixed_point >= other.fixed_point);
}

bool Fixed::operator!=(const Fixed& other)
{
    return (fixed_point != other.fixed_point);
}

bool Fixed::operator==(const Fixed& other)
{
    return (fixed_point == other.fixed_point);
}

float Fixed::operator+(const Fixed& other)
{
    return (this->toFloat() + other.toFloat());
}

float Fixed::operator-(const Fixed& other)
{
    return (this->toFloat() - other.toFloat());
}

float Fixed::operator*(const Fixed& other)
{
    return (this->toFloat() * other.toFloat());
}

float Fixed::operator/(const Fixed& other)
{
    return (this->toFloat() / other.toFloat());
}

Fixed	Fixed::operator++()
{
    ++fixed_point;
    return *this;
}

Fixed	Fixed::operator--()
{
    --fixed_point;
    return *this;
}

Fixed	Fixed::operator++(int)
{
    Fixed copy(*this);
    ++(*this);
    return copy;
}

Fixed	Fixed::operator--(int)
{    
    Fixed copy(*this);
    --(*this);
    return copy;
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
    if (f1 < f2)
        return f1;
    else
        return f2;
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() < f2.getRawBits() )
        return f1;
    return f2;
        
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
    if (f1 > f2)
        return f1;
    else
        return f2;
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() > f2.getRawBits() )
        return f1;
    return f2;
}


std::ostream &operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return o;
}

int Fixed::getRawBits() const
{
    return (fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
}

Fixed::~Fixed()
{
}