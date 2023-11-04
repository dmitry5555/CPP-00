/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:58:30 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/11/04 16:22:24 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main() {
	int index;
	std::string cmd;
	std::string index_str;
	std::string t1;
	std::string t2;
	std::string t3;
	std::string t4;
	std::string t5;
	PhoneBook myBook;

	while(1)
	{
		std::cout << "Enter ADD / SEARCH / EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			std::cout << "first name" << std::endl;
			std::getline(std::cin, t1);
			std::cout << "last name" << std::endl;
			std::getline(std::cin, t2);
			std::cout << "nickname" << std::endl;
			std::getline(std::cin, t3);
			std::cout << "phone number" << std::endl;
			std::getline(std::cin, t4);
			std::cout << "darkest secret" << std::endl;
			std::getline(std::cin, t5);
			myBook.addContact(new Contact(t1,t2,t3,t4,t5));
		}
		if (cmd == "SEARCH")
		{
			std::cout << "enter contact's index " << std::endl;
			std::getline(std::cin, index_str);
			if (!index_str.empty())
			{
				try {
					index = std::stoi(index_str);
					if (1 <= index && index <= 8)
						myBook.searchContact(index - 1);
					else
						std::cout << "wrong index " << std::endl;
				} catch (const std::invalid_argument& e) {
					std::cout << "wrong index " << std::endl;
				} catch (const std::out_of_range& e) {
					std::cout << "wrong index " << std::endl;
				}
			}
		}
		if (cmd == "EXIT")
			return(0);
	}
	return(0);
}