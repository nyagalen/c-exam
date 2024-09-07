/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:59:35 by svydrina          #+#    #+#             */
/*   Updated: 2024/09/01 17:47:03 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;
		
	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		ASpell(ASpell const &copy);
		ASpell &operator=(ASpell const &copy);
		virtual ~ASpell();
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell *clone() const = 0;
		void launch( ATarget const &target) const;
};