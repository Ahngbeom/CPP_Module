/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:52:33 by bahn              #+#    #+#             */
/*   Updated: 2022/02/09 18:30:03 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap	clap("CLAP");
	ScavTrap	scav("SCAV");

	clap.attack("SCAV");
	scav.takeDamage(0);
	scav.guardGate();
	scav.attack("CLAP");
	clap.takeDamage(20);
	// clap.guardGate();

	clap.displayAttributes();
	scav.displayAttributes();
	return 0;
}
