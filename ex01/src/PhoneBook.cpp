/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:08:02 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/11/04 16:08:54 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : cur_index(0) {
}

void PhoneBook::addContact(Contact* newContact) {
	contacts[cur_index % 8] = newContact;
	cur_index++;
}

void PhoneBook::searchContact(int index) {
	if(index < cur_index)
		contacts[index]->printContact();
	else
		std::cout << "no contact" << std::endl;
}

PhoneBook::~PhoneBook() {
}
