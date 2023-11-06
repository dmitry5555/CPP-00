/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:45:02 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/11/06 15:44:02 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(const std::string& fname, const std::string& lname, const std::string& nname, const std::string& pnum, const std::string& dsec)
	: fname(fname), lname(lname), nname(nname), pnum(pnum), dsec(dsec) {
}

void Contact::printFname() {
	std::cout << fname << std::endl;
}

void Contact::tenPrint(std::string val, int is_pipe) {
	if (val.length() > 10)
		val = val.substr(0, 9) + ".";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << val;
	if (is_pipe)
		std::cout << '|';
}

void Contact::printContact() {
	tenPrint(fname, 1);
	tenPrint(lname, 1);
	tenPrint(nname, 1);
	tenPrint(pnum, 1);
	tenPrint(dsec, 0);
	std::cout << std::endl;
}

Contact::~Contact() {
}