/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 09:39:10 by lde-san-          #+#    #+#             */
/*   Updated: 2026/08/30 16:08:15 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &original);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();

		ScavTrap &operator=(ScavTrap const &rhs);
};
#endif


class homeoy
{
	public:

		homeoy();
		homeoy(std::string name);
		homeoy(homeoy const &original);
		~homeoy();

		void	attack(const std::string& target);
		void	guardGate();

		homeoy &operator=(homeoy const &r
