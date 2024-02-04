/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:46:26 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/03 23:32:27 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	olivier("olivier");
	FragTrap	random;
	FragTrap	ziggy("ziggy");
	FragTrap	cop(ziggy);

	ziggy.attack("Random");
	random.takeDamage(20);
	random.highFivesGuys();

	for (int i = 0; i < 6; i++)
		ziggy.beRepaired(5);

	ziggy.beRepaired(100);
	olivier.attack("ziggy");
	ziggy.takeDamage(0);

	return (0);
}
