/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:44:34 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:44:40 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
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