/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/21 22:31:18 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	FragTrap	fragRef("FragRef");
	ScavTrap	scavRef("ScavRef");

	std::cout << "\nFragTrap has: HP=" << fragRef.getHitPoints()
			  << ", Energy=" << fragRef.getEnergyPoints()
			  << ", Damage=" << fragRef.getAttackDamage() << std::endl;
	std::cout << "ScavTrap has: HP=" << scavRef.getHitPoints()
			  << ", Energy=" << scavRef.getEnergyPoints()
			  << ", Damage=" << scavRef.getAttackDamage() << std::endl;

	DiamondTrap	noone;
	DiamondTrap	diamond("Diamond");

	std::cout << "DiamondTrap has: HP=" << diamond.getHitPoints()
			  << " (should be " << fragRef.getHitPoints() << " from FragTrap)" << std::endl;
	std::cout << "DiamondTrap has: Energy=" << diamond.getEnergyPoints()
			  << " (should be " << scavRef.getEnergyPoints() << " from ScavTrap)" << std::endl;
	std::cout << "DiamondTrap has: Damage=" << diamond.getAttackDamage()
			  << " (should be " << fragRef.getAttackDamage() << " from FragTrap)" << std::endl;

	if (diamond.getHitPoints() == fragRef.getHitPoints() &&
		diamond.getEnergyPoints() == scavRef.getEnergyPoints() &&
		diamond.getAttackDamage() == fragRef.getAttackDamage())
	{
		std::cout << COL_G "\nDiamondTrap attributes are CORRECT!" COL_X << std::endl;
	}
	else
	{
		std::cout << COL_R "\nDiamondTrap attributes are WRONG!" COL_X << std::endl;
	}

	diamond.whoAmI();
	diamond.attack("Someone");
	diamond.beRepaired(50);
	diamond.takeDamage(35);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.takeDamage(350);
	diamond.guardGate();
	diamond.highFivesGuys();
	std::cout << "Current Energy points: " << diamond.getEnergyPoints() << std::endl;

	return (0);
}

