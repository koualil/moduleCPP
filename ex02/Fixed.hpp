/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:25:28 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/03 21:43:33 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_FIXED
#define HEADER_FIXED

#include <iostream>

class Fixed
{
private:
    /* data */
    int  fixed_point;
    static const int frac_bits = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float floating_point);
    Fixed(const Fixed& f);
    Fixed& operator=(const Fixed& other);
    //The 6 comparison operators: >, <, >=, <=, == and !=
    bool operator<(const Fixed& other);
    bool operator>(const Fixed& other);
    bool operator<=(const Fixed& other);
    bool operator>=(const Fixed& other);
    bool operator!=(const Fixed& other);
    bool operator==(const Fixed& other);
    // The 4 arithmetic operators: +, -, *, and /
    float operator+(const Fixed& other);
    float operator-(const Fixed& other);
    float operator*(const Fixed& other);
    float operator/(const Fixed& other);
    //The 4 increment/decrement 
    Fixed	operator++();
    Fixed	operator--();
    Fixed	operator++(int);
    Fixed	operator--(int);
    //four public overloaded member functions to your class:
    static  Fixed& min(Fixed& f1, Fixed& f2);
    static const Fixed& min(const Fixed& f1, const Fixed& f2);
    static  Fixed& max(Fixed& f1, Fixed& f2);
    static const Fixed& max(const Fixed& f1, const Fixed& f2);
    
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};

std::ostream  &operator<<(std::ostream &o, Fixed const &f);

#endif