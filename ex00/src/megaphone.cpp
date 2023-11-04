/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:24:07 by dlariono          #+#    #+#             */
/*   Updated: 2023/11/04 16:24:08 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_toupper(char a)
{
	if (97 <= a && a <= 122)
		a -= 32;
	return (a);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(av[++j])
		{
			i = -1;
			while(av[j][++i])
				std::cout << ft_toupper(av[j][i]);
		}
		std::cout << "\n";
	}
	return (0);
}