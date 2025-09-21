/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/21 13:25:00 by psmolin          ###   ########.fr       */
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
	sam.takeDamage(2);
	sam.beRepaired(5);
	sam.attack("Bob_5");
	sam.attack("Bob_6");
	sam.attack("Bob_7");
	sam.attack("Bob_8");
	sam.attack("Bob_9");
	sam.beRepaired(5);
	sam.takeDamage(5);
	sam.takeDamage(3);
	sam.takeDamage(7);
	sam.takeDamage(6);
	return (0);
}

