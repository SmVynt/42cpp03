/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/21 13:14:55 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap () :
		_name("Unnamed"),
		_hp(10),
		_energy(10),
		_damage(10)
{
	std::cout << COL_G "Unnamed ClapTrap created" COL_X << std::endl;
};

ClapTrap::ClapTrap(std::string name) :
		_name(name),
		_hp(10),
		_energy(10),
		_damage(10)
{
	std::cout << COL_G "ClapTrap " << name << " created" COL_X << std::endl;
};

ClapTrap::ClapTrap (const ClapTrap &other) :
		_name(other._name),
		_hp(other._hp),
		_energy(other._energy),
		_damage(other._damage)
{
	std::cout << COL_G "Copy of ClapTrap " << _name;
	std::cout << " has been constructed" COL_X << std::endl;
};

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_energy = other._energy;
		_damage = other._damage;
	}
	std::cout << COL_G "Copy of ClapTrap " << _name;
	std::cout << " has been assigned" COL_X << std::endl;
	return (*this);
};

ClapTrap::~ClapTrap (){
	std::cout << COL_Y "ClapTrap " << _name << " destroyed" COL_X << std::endl;
};

void	ClapTrap::attack(const std::string& target) {
	if (_energy > 0)
	{
		_energy-- ;
		std::cout << "ClapTrap " << _name << COL_B " attacks " COL_X << target;
		std::cout << ", causing " << _damage << " amount of damage!";
		std::cout << std::endl;
	}
	else
	{
		std::cout << COL_R "ClapTrap " << _name << " is too exhausted to attack ";
		std::cout << target << COL_X << std::endl;
	}
};

void	ClapTrap::takeDamage(unsigned int amount) {
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
};

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energy > 0)
	{
		_energy-- ;
		_hp += amount;
		std::cout << "ClapTrap " << _name << COL_G " repairs " COL_X << "itself by ";
		std::cout << amount << " hp" << std::endl;
	}
	else
	{
		std::cout << COL_R "ClapTrap " << _name << " is too exhausted to repair" COL_X;
		std::cout << std::endl;
	}
};
