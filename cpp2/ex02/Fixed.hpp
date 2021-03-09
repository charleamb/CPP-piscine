/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:41 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/04 18:03:05 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed {

	private:

		int					_fixep;
		const static int	_bit = 8;
		

	public:

				Fixed();
				Fixed(const Fixed	&f);
				Fixed(const int		f);
				Fixed(const float	f);
		float	ToFloat(void) const;
		int		ToInt(void) const;
		Fixed	&operator=(const Fixed &f);
		bool	operator>(const Fixed &f) const;
		bool	operator<(const Fixed &f) const;
		bool	operator>=(const Fixed &f) const;;
		bool	operator<=(const Fixed &f) const;
		bool	operator==(const Fixed &f) const;
		bool	operator!=(const Fixed &f) const;;
		Fixed	operator+(const Fixed &f) const;
		Fixed	operator-(const Fixed &f) const;
		Fixed	operator*(const Fixed &f) const;
		Fixed	operator/(const Fixed &f) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		static const Fixed		&min(const Fixed &a, const Fixed &b);
		static const Fixed		&max(const Fixed &a, const Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		~Fixed();
};

const Fixed		&min(const Fixed &a, const Fixed &b);
const Fixed		&max(const Fixed &a, const Fixed &b);
Fixed		&min(Fixed &a, Fixed &b);
Fixed		&max(Fixed &a, Fixed &b);

std::ostream	&operator<<(std::ostream &o, const Fixed &f);

#endif
