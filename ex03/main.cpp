/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/21 22:11:13 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	noone;
	DiamondTrap	diamond("Daimond");
	diamond.whoAmI();
	diamond.attack("Someone");
	diamond.beRepaired(50);
	diamond.takeDamage(35);
	diamond.guardGate();
	diamond.highFiveGuys();
	return (0);
}

