/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:07:06 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/11/06 15:44:00 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	private:
		std::string fname;
		std::string lname;
		std::string nname;
		std::string pnum;
		std::string dsec;

	public:
		Contact(const std::string& fname, const std::string& lname, const std::string& nname, const std::string& pnum, const std::string& dsec);
		~Contact();
		void printFname();
		void tenPrint(std::string val, int is_pipe);
		void printContact();
};

#endif
