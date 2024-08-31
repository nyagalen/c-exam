/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:59:45 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/31 21:56:14 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string name, std::string effects): name(name), effects(effects) {}

ASpell::ASpell(ASpell const &copy)
{
	*this = copy;
}

ASpell &ASpell::operator=(ASpell const &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->effects = copy.effects;
	}
	return *this;
}

ASpell::~ASpell() {}

std::string ASpell::getName() const{
	return name;
}

std::string ASpell::getEffects() const{
	return effects;
}

void ASpell::launch(ATarget const &target) const{
	target.getHitBySpell(*this);
}