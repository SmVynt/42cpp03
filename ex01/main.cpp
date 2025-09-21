/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/21 14:16:36 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	sam("Sam");
	ScavTrap	nobody;
	ScavTrap	samjr(sam);
	ScavTrap	bob("Bob");

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
	bob.guardGate();
	sam.beRepaired(5);
	sam.takeDamage(50);
	sam.takeDamage(30);
	sam.takeDamage(70);
	sam.takeDamage(60);
	sam.guardGate();
	return (0);
}

