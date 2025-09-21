/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/21 22:30:30 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap ()
{
	_hp = 100;
	_energy = 50;
	_damage = 20;
	std::cout << COL_G "ScavTrap created" COL_X << std::endl;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 50;
	_damage = 20;
	std::cout << COL_G "ScavTrap " << name << " created" COL_X << std::endl;
};

ScavTrap::ScavTrap (const ScavTrap &other) : ClapTrap(other)
{
	std::cout << COL_G "Copy of ScavTrap " << _name;
	std::cout << " has been constructed" COL_X << std::endl;
};

ScavTrap &ScavTrap::operator = (const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator = (other);
	std::cout << COL_G "Copy of ScavTrap " << _name;
	std::cout << " has been assigned" COL_X << std::endl;
	return (*this);
};

ScavTrap::~ScavTrap (){
	std::cout << COL_Y "ScavTrap " << _name << " destroyed" COL_X << std::endl;
};

void	ScavTrap::attack(const std::string& target) {
	if (_energy > 0)
	{
		_energy-- ;
		std::cout << "ScavTrap " << _name << COL_B " attacks " COL_X << target;
		std::cout << ", causing " << _damage << " amount of damage!";
		std::cout << std::endl;
	}
	else
	{
		std::cout << COL_R "ClapTrap " << _name << " is too exhausted to attack ";
		std::cout << target << COL_X << std::endl;
	}
};

void	ScavTrap::takeDamage(unsigned int amount) {
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
	std::cout << "ScavTrap " << _name << " takes " COL_R << amount << COL_X;
	std::cout << " damage. Current hp: ";
	if (_hp == 0)
		std::cout << COL_R << _hp << COL_X<< std::endl;
	else
		std::cout << COL_G << _hp << COL_X<< std::endl;
};

void	ScavTrap::beRepaired(unsigned int amount) {
	if (_energy > 0)
	{
		_energy-- ;
		_hp += amount;
		std::cout << "ScavTrap " << _name << COL_G " repairs " COL_X << "itself by ";
		std::cout << amount << " hp. Current hp: " << COL_G << _hp << COL_X << std::endl;
	}
	else
	{
		std::cout << COL_R "ScavTrap " << _name << " is too exhausted to repair" COL_X;
		std::cout << std::endl;
	}
};

void	ScavTrap::guardGate() const
{
	if (_hp > 0)
	{
		std::cout << "ScavTrap " << _name << " is now in ";
		std::cout << COL_B "Gate keeper" COL_X << " mode" << std::endl;
	}
	else
	{
		std::cout << COL_R "ScavTrap " << _name << " is broken and can't change mode" COL_X;
		std::cout << std::endl;
	}
};
