/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:26:27 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/14 15:50:15 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include "contact.hpp"

const int MAX_CONTACTS = 8;
const int FIELD_WIDTH = 10;

class Phonebook
{
	private:
		int			current_size;
		Contact		contacts[MAX_CONTACTS];

	public:
		Phonebook(void);
		~Phonebook(void);
		void		displayContacts();
		void		addContact();
};

#endif
