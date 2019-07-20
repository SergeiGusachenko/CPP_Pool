/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:27:51 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 11:45:53 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		login;
		std::string		address;
		std::string		email;
		std::string		phoneNumber;
		std::string		birthday;
		std::string		favoriteMeal;
		std::string		underwearColor;
		std::string		darkestSecret;
	public:
		Contact(void);
		~Contact(void);

		void			display(void);
		void			setFirstName(void);
		void			setLastName(void);
		void			setNickname(void);
		void			setLogin(void);
		void			setAddress(void);
		void			setEmail(void);
		void			setPhoneNumber(void);
		void			setBirthday(void);
		void			setFavoriteMeal(void);
		void			setUnderwearColor(void);
		void			setDarkestSecret(void);
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickname(void);
		std::string		getLogin(void);
		std::string		getAddress(void);
		std::string		getEmail(void);
		std::string		getPhoneNumber(void);
		std::string		getBirthday(void);
		std::string		getFavoriteMeal(void);
		std::string		getUnderwearColor(void);
		std::string		getDarkestSecret(void);
};
#endif
