/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:25:28 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/03 21:42:46 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_FIXED
#define HEADER_FIXED

class Fixed
{
private:
    /* data */
    int  fixed_point;
    static const int frac_bits = 8;
public:
    Fixed();
    Fixed(const Fixed& f);
    Fixed& operator=(const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};

#endif
