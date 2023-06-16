/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:44:46 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:44:47 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
public :
	Fixed(); // default constructor
	Fixed(const Fixed &source); // copy constructor
	~Fixed(); // destructor
	Fixed &operator = (const Fixed &source);

	int getRawBits() const;
	void setRawBits(const int raw);

private:
	int	fixedPointValue;
	static const int fractionalBits = 8; 

};


#endif