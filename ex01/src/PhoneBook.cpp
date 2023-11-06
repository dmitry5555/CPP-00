/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:08:02 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/11/06 15:44:28 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : cur_index(0) {
}

void PhoneBook::addContact() {
	std::string fname, lname, nname, pnum, dsec;

	std::cout << "first name" << std::endl;
	while (fname.length() <= 0)
		std::getline(std::cin, fname);
	std::cout << "last name" << std::endl;
	while (lname.length() <= 0)
		std::getline(std::cin, lname);
	std::cout << "nickname" << std::endl;
	while (nname.length() <= 0)
		std::getline(std::cin, nname);
	std::cout << "phone number" << std::endl;
	while (pnum.length() <= 0)
	{
		std::getline(std::cin, pnum);
		for (std::string::iterator it = pnum.begin(); it != pnum.end(); ++it)
		{
			if (!std::isdigit(*it))
			{
				std::cout << "wrong number" << std::endl;
				pnum.clear();
				break;
			}
		}
	}
	std::cout << "darkest secret" << std::endl;
	while (dsec.length() <= 0)
		std::getline(std::cin, dsec);

	contacts[cur_index % 8] = new Contact(fname, lname, nname, pnum, dsec);
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
