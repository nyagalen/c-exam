/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:21:15 by svydrina          #+#    #+#             */
/*   Updated: 2024/09/01 18:40:23 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include "ASpell.hpp"

class ASpell;
class ATarget;

class SpellBook
{
private:
	SpellBook(const SpellBook &copy);
	SpellBook &operator=(const SpellBook &copy);
	std::vector<ASpell *> spells;
	
public:
	SpellBook(/* args */);
	~SpellBook();
	std::vector<ASpell *> getSpells() const;
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spell);
	void launchSpell(std::string spell, ATarget &target);
};


