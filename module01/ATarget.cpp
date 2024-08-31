/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:00:23 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/31 21:57:38 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string type): type(type) {}

ATarget::ATarget(ATarget const &copy)
{
	*this = copy;
}

ATarget &ATarget::operator=(ATarget const &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

ATarget::~ATarget() {}

std::string ATarget::getType() const {
	return type;
}

void ATarget::getHitBySpell(ASpell const &spell) const{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}