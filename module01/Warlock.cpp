/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:36:43 by svydrina          #+#    #+#             */
/*   Updated: 2024/09/01 17:39:13 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(/* args */)
{
}

Warlock::Warlock(std::string name, std::string title): name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& rhs)
{
	*this = rhs;
}

Warlock& Warlock::operator=(const Warlock& rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
	return *this;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const Warlock::getName() const
{
	return name;
}

std::string const Warlock::getTitle() const{
	return title;
}

void Warlock::setTitle(std::string const title)
{
	this->title = title;
}

void Warlock::introduce() const{
	std::cout << name << ": I am " << name << ", " << title << "!"<<std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		std::vector<ASpell*>::iterator it= spells.begin();
		while (it !=spells.end())
		{
			if ((*it)->getName() == spell->getName())
				return;
			it++;
		}
		spells.push_back(spell->clone());
	}
}

void Warlock::forgetSpell(std::string spell){
	std::vector<ASpell*>::iterator it = spells.begin();
	while (it != spells.end())
	{
		if ((*it)->getName() == spell)
		{
			delete *it;
			spells.erase(it);
			return;
		}
		it++;
	}
}

void Warlock::launchSpell(std::string spell, ATarget &target)
{
	std::vector<ASpell*>::iterator it = spells.begin();
	while (it != spells.end())
	{
		if ((*it)->getName()== spell)
		{
			(*it)->launch(target);
		}
		it++;
	}
}