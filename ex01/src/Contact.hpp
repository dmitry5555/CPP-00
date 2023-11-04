/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:07:06 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/11/04 16:08:52 by dlariono         ###   ########.fr       */
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
		Contact(const std::string& t1, const std::string& t2, const std::string& t3, const std::string& t4, const std::string& t5);
		~Contact();
		void printFname();
		void tenPrint(std::string val, int is_pipe);
		void printContact();
};

#endif
