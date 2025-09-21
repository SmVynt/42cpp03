/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/21 20:43:03 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	sam("Sam");
	ScavTrap	bob("Bob");

	bob.attack("Tom");
	bob.takeDamage(2);
	bob.beRepaired(5);
	bob.guardGate();
	sam.beRepaired(10);
	sam.highFiveGuys();
	sam.beRepaired(5);
	sam.takeDamage(50);
	sam.takeDamage(30);
	sam.takeDamage(70);
	sam.takeDamage(60);
	sam.highFiveGuys();

	ClapTrap* traps[] = {
		new ClapTrap("Basic"),
		new ScavTrap("Guardian"),
		new FragTrap("HighFiver")
	};

	for (int i = 0; i < 3; i++) {
		traps[i]->attack("Enemy");
		traps[i]->takeDamage(10);
		traps[i]->beRepaired(5);
	}
	for (int i = 0; i < 3; i++)
		delete (traps[i]);
	return (0);
}

