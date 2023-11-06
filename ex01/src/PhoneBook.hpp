/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:07:51 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/11/06 15:43:41 by dlariono         ###   ########.fr       */
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
		void addContact();
		void searchContact(int index);
};

#endif