/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/21 13:13:57 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	sam("Sam");
	ClapTrap	nobody;
	ClapTrap	samjr(sam);
	ClapTrap	bob("Bob");

	nobody.attack("Tom");
	nobody = sam;
	nobody.attack("Tom");
	sam.attack("Bob_0");
	sam.attack("Bob_1");
	sam.attack("Bob_2");
	sam.attack("Bob_3");
	sam.attack("Bob_4");
	sam.beRepaired(5);
	sam.attack("Bob_5");
	sam.attack("Bob_6");
	sam.attack("Bob_7");
	sam.attack("Bob_8");
	sam.attack("Bob_9");
	sam.beRepaired(5);
	return (0);
}

