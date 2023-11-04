/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:45:02 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/11/04 16:22:47 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(const std::string& t1, const std::string& t2, const std::string& t3, const std::string& t4, const std::string& t5)
	: fname(t1), lname(t2), nname(t3), pnum(t4), dsec(t5) {
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