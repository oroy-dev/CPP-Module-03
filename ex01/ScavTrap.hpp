/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:33:38 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/03 22:01:22 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);

	void		attack(const std::string& target);
	void		guardGate(void);

};

#endif
