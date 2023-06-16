/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:45:18 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:45:28 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout <<"Int constructor called" << std::endl;
	this->fixedPointValue = value << this->fractionalBits;
}

Fixed::Fixed(const float value) {
	std::cout <<"Float  constructor called" << std::endl;
	this->fixedPointValue = value * (1 << this->fractionalBits);
}

Fixed::Fixed(const Fixed &source) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" <<std::endl;
}

Fixed &Fixed::operator= (const Fixed &source) {
	std::cout << "Assignment operator called" << std::endl;

	if (this == &source)
		return *this;

	this->fixedPointValue = source.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" <<std::endl;
	return this->fixedPointValue;
}

void Fixed::setRawBits(const int raw)  {

	this->fixedPointValue = raw;
}

float Fixed::toFloat() const {
	return (float)this->fixedPointValue / (1 << this->fractionalBits);
}

int Fixed::toInt() const {
	return this->fixedPointValue >> this->fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

