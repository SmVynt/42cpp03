/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/21 22:30:36 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap ()
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	std::cout << COL_G "FragTrap created" COL_X << std::endl;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	std::cout << COL_G "FragTrap " << name << " created" COL_X << std::endl;
};

FragTrap::FragTrap (const FragTrap &other) : ClapTrap(other)
{
	std::cout << COL_G "Copy of FragTrap " << _name;
	std::cout << " has been constructed" COL_X << std::endl;
};

FragTrap &FragTrap::operator = (const FragTrap &other)
{
	if (this != &other)
		ClapTrap::operator = (other);
	std::cout << COL_G "Copy of FragTrap " << _name;
	std::cout << " has been assigned" COL_X << std::endl;
	return (*this);
};

FragTrap::~FragTrap (){
	std::cout << COL_Y "FragTrap " << _name << " destroyed" COL_X << std::endl;
};

void	FragTrap::attack(const std::string& target) {
	if (_energy > 0)
	{
		_energy-- ;
		std::cout << "FragTrap " << _name << COL_B " attacks " COL_X << target;
		std::cout << ", causing " << _damage << " amount of damage!";
		std::cout << std::endl;
	}
	else
	{
		std::cout << COL_R "ClapTrap " << _name << " is too exhausted to attack ";
		std::cout << target << COL_X << std::endl;
	}
};

void	FragTrap::takeDamage(unsigned int amount) {
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
	std::cout << "FragTrap " << _name << " takes " COL_R << amount << COL_X;
	std::cout << " damage. Current hp: ";
	if (_hp == 0)
		std::cout << COL_R << _hp << COL_X<< std::endl;
	else
		std::cout << COL_G << _hp << COL_X<< std::endl;
};

void	FragTrap::beRepaired(unsigned int amount) {
	if (_energy > 0)
	{
		_energy-- ;
		_hp += amount;
		std::cout << "FragTrap " << _name << COL_G " repairs " COL_X << "itself by ";
		std::cout << amount << " hp. Current hp: " << COL_G << _hp << COL_X << std::endl;
	}
	else
	{
		std::cout << COL_R "FragTrap " << _name << " is too exhausted to repair" COL_X;
		std::cout << std::endl;
	}
};

void	FragTrap::highFiveGuys() const
{
	if (_hp > 0)
	{
		std::cout << "FragTrap " << _name << " is ";
		std::cout << COL_B "high fiving everyone" COL_X << std::endl;
	}
	else
	{
		std::cout << COL_R "FragTrap " << _name << " is broken and can't give a high five" COL_X;
		std::cout << std::endl;
	}
};
