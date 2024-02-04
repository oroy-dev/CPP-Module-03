/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:34:27 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/03 23:10:45 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("random")
{
	_name = ClapTrap::_name;
	_hitpoints = FragTrap::_hitpoints;
	_energypoints = ScavTrap::_energypoints;
	_attackdamage = FragTrap::_attackdamage;
	std::cout << "A random DiamondTrap created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	_name = ClapTrap::_name;
	_hitpoints = FragTrap::_hitpoints;
	_energypoints = ScavTrap::_energypoints;
	_attackdamage = FragTrap::_attackdamage;
	std::cout << "DiamondTrap " << _name << " created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	*this = src;
	std::cout << "DiamondTrap " << _name << " created by copy" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " destroyed!!!" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	_name = rhs._name;
	_hitpoints = rhs._hitpoints;
	_energypoints = rhs._energypoints;
	_attackdamage = rhs._attackdamage;
	return (*this);
}

void	attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello" << std::endl;
}