/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:58:30 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/11/06 16:09:33 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


int main()
{
	int index;
	std::string cmd;
	std::string index_str;
	PhoneBook myBook;

	while(1)
	{
		std::cout << "Enter ADD / SEARCH / EXIT" << std::endl;
		std::getline(std::cin, cmd);

		if (cmd == "ADD")
			myBook.addContact();
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
		if (std::cin.eof())
		{
			std::cout << "Exiting" << std::endl;
			break;
		}

	}
	return(0);
}