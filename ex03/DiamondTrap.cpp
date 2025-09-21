/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/21 22:19:11 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ()
	:ClapTrap("Unnamed_clap_name"), ScavTrap(), FragTrap()
{
	_name = "Unnamed";
	_hp = FragTrap::_hp;
	_energy = ScavTrap::_energy;
	_damage = FragTrap::_damage;
	std::cout << COL_G "DiamondTrap Unnamed created" COL_X << std::endl;
};

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	_name = name;
	_hp = FragTrap::_hp;
	_energy = ScavTrap::_energy;
	_damage = FragTrap::_damage;
	std::cout << COL_G "DiamondTrap " << name << " created" COL_X << std::endl;
};

DiamondTrap::DiamondTrap (const DiamondTrap &other)
	: ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	_name = other._name;
	std::cout << COL_G "Copy of DiamondTrap " << _name;
	std::cout << " has been constructed" COL_X << std::endl;
};

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator = (other);
		this->_name = other._name;
	}
	std::cout << COL_G "Copy of DiamondTrap " << _name;
	std::cout << " has been assigned" COL_X << std::endl;
	return (*this);
};

DiamondTrap::~DiamondTrap (){
	std::cout << COL_Y "DiamondTrap " << _name << " destroyed" COL_X << std::endl;
};


void	DiamondTrap::attack(const std::string& target) {
	if (_energy > 0)
	{
		_energy-- ;
		std::cout << "DiamondTrap " << _name << COL_B " attacks " COL_X << target;
		std::cout << ", causing " << _damage << " amount of damage!";
		std::cout << std::endl;
	}
	else
	{
		std::cout << COL_R "DiamondTrap " << _name << " is too exhausted to attack ";
		std::cout << target << COL_X << std::endl;
	}
};

void	DiamondTrap::takeDamage(unsigned int amount) {
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
	std::cout << "DiamondTrap " << _name << " takes " COL_R << amount << COL_X;
	std::cout << " damage. Current hp: ";
	if (_hp == 0)
		std::cout << COL_R << _hp << COL_X<< std::endl;
	else
		std::cout << COL_G << _hp << COL_X<< std::endl;
};

void	DiamondTrap::beRepaired(unsigned int amount) {
	if (_energy > 0)
	{
		_energy-- ;
		_hp += amount;
		std::cout << "DiamondTrap " << _name << COL_G " repairs " COL_X << "itself by ";
		std::cout << amount << " hp. Current hp: " << COL_G << _hp << COL_X << std::endl;
	}
	else
	{
		std::cout << COL_R "DiamondTrap " << _name << " is too exhausted to repair" COL_X;
		std::cout << std::endl;
	}
};

void	DiamondTrap::whoAmI(){
	std::cout << "My ClapTrap name is:" COL_Y << ClapTrap::_name << COL_X << std::endl;
	std::cout << "My DiamondTrap name is:" COL_Y << _name << COL_X << std::endl;
}

void	DiamondTrap::guardGate() const
{
	if (_hp > 0)
	{
		std::cout << "DiamondTrap " << _name << " is now in ";
		std::cout << COL_B "Gate keeper" COL_X << " mode" << std::endl;
	}
	else
	{
		std::cout << COL_R "DiamondTrap " << _name << " is broken and can't change mode" COL_X;
		std::cout << std::endl;
	}
}

void	DiamondTrap::highFiveGuys() const
{
	if (_hp > 0)
	{
		std::cout << "DiamondTrap " << _name << " is ";
		std::cout << COL_B "high fiving everyone" COL_X << std::endl;
	}
	else
	{
		std::cout << COL_R "DiamondTrap " << _name << " is broken and can't give a high five" COL_X;
		std::cout << std::endl;
	}
};
