/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:34:27 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/03 22:26:35 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("random")
{
	std::cout << "A random ScavTrap created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << _name << " created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "ScavTrap " << _name << " created by copy" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " destroyed!!!" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	_name = rhs._name;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << std::endl;
	if (_hitpoints > 0)
	{
		if (_energypoints)
		{
			std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
			--_energypoints;
		}
		else
			std::cout << "ScavTrap " << _name << " has no energy points left." << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " can't attack since it's dead." << std::endl;
	printStatus();
	std::cout << std::endl;
	std::cout << "-------------------------------" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " entered gate keeper mode!!!" << std::endl;
}
