/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:07:51 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/11/04 16:22:39 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class Contact;

class PhoneBook {
	private:
		int cur_index;
		Contact* contacts[8];

	public:
		PhoneBook();
		~PhoneBook();
		void addContact(Contact* newContact);
		void searchContact(int index);
};

#endif