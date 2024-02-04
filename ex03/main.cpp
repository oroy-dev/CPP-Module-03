/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:46:26 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/04 00:04:45 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	olivier("olivier");
	DiamondTrap	random;
	DiamondTrap	ziggy("ziggy");
	DiamondTrap	cop(ziggy);

	ziggy.attack("Random");
	random.takeDamage(20);
	random.whoAmI();

	for (int i = 0; i < 6; i++)
		ziggy.beRepaired(5);

	ziggy.beRepaired(100);
	olivier.attack("ziggy");
	ziggy.takeDamage(0);

	return (0);
}