/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:33:38 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/04 00:07:03 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:

	ScavTrap(void);
	ScavTrap(std::string _name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);

	void		attack(const std::string& target);
	void		guardGate(void);

};

#endif
