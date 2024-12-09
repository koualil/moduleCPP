/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:25:28 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/08 15:47:49 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_FIXED
#define HEADER_FIXED

#include <iostream>
#include <cmath>

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
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};

std::ostream  &operator<<(std::ostream &o, Fixed const &f);

#endif