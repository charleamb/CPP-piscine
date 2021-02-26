/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:56:13 by user42            #+#    #+#             */
/*   Updated: 2021/02/16 14:57:05 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Phonebook {

	private:

		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _login;
		std::string _adress;
		std::string _email;
		std::string _number;
		std::string _birthday;
		std::string _favorite_meal;
		std::string _underwear_color;
		std::string _darkest_secret;

	public:
		void	ft_add();
		void	ft_search(Phonebook book[] , int i);
		void	ft_print_user(Phonebook book);
		int		ft_find(Phonebook book, std::string buff);
};
