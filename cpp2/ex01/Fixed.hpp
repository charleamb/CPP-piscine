/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:41 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/03 11:47:31 by chgilber         ###   ########.fr       */
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
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
				~Fixed();
};

std::ostream	&operator<<(std::ostream &o, const Fixed &f);

#endif
