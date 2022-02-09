/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:58:59 by bahn              #+#    #+#             */
/*   Updated: 2022/02/09 23:03:06 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : \
	ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << "[DiamondTrap] Name constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	this->displayAttributes();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Deconstructor called" << std::endl;
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}
