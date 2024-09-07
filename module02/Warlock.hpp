/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:36:33 by svydrina          #+#    #+#             */
/*   Updated: 2024/09/01 19:06:22 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <vector>

class Warlock
{
private:
	std::string name;
	std::string title;
	SpellBook book;
	Warlock(/* args */);
	Warlock(const Warlock& rhs);
	Warlock& operator=(const Warlock& rhs);
	std::vector<ASpell *> spells;
	
public:
	Warlock(std::string name, std::string title);
	~Warlock();
	std::string const getName() const;
	std::string const getTitle() const;
	std::vector<ASpell*> getSpells() const;
	void setTitle(std::string const title);
	void introduce() const;
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spell);
	void launchSpell(std::string spell, ATarget &target);
};


