/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:46:04 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:46:06 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public :
	Fixed(); // default constructor
	Fixed(const int value); // integer constructor
	Fixed(const float value); // Float constructor
	Fixed(const Fixed &source); // copy constructor
	~Fixed(); // destructor
	Fixed &operator = (const Fixed &source); // Copy assignment overload


	bool operator>(const Fixed &rhs) const;
	bool operator<(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;

	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

	int getRawBits() const;
	void setRawBits(const int raw);

	float toFloat() const; // convert fixed-point to float
	int toInt() const; // convert floating point to fixed-point

private:
	int	fixedPointValue;
	static const int fractionalBits = 8; 

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif