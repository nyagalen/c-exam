/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:21:25 by svydrina          #+#    #+#             */
/*   Updated: 2024/09/01 18:41:34 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "SpellBook.hpp"


SpellBook::SpellBook(/* args */)
{
}

SpellBook::~SpellBook()
{
}

SpellBook::SpellBook(const SpellBook &copy)
{
	*this = copy;
}

SpellBook &SpellBook::operator=(const SpellBook &copy)
{
	if (this != &copy)
	{
		(void)copy;
	}
	return *this;
}

void SpellBook::learnSpell(ASpell *spell)
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

void SpellBook::forgetSpell(std::string spell){
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

void SpellBook::launchSpell(std::string spell, ATarget &target)
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