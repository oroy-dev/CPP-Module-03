/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:46:26 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/03 22:32:04 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	olivier("olivier");
	ScavTrap	random;
	ScavTrap	ziggy("ziggy");
	ScavTrap	cop(random);

	ziggy.attack("Random");
	random.takeDamage(20);
	random.guardGate();
	random.attack("ziggy");
	ziggy.takeDamage(20);
	ziggy.takeDamage(20);
	ziggy.takeDamage(20);
	ziggy.takeDamage(20);
	ziggy.takeDamage(20);
	ziggy.takeDamage(20);
	ziggy.beRepaired(100);
	olivier.attack("ziggy");
	ziggy.takeDamage(20);

	for (int i = 0; i < 50; i++)
		random.beRepaired(10);

	return (0);
}
