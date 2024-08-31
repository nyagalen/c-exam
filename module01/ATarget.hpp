/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:00:14 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/31 21:57:56 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string type;
	public:
		ATarget();
		ATarget(std::string type);
		ATarget(ATarget const &copy);
		ATarget &operator=(ATarget const &copy);
		virtual ~ATarget();
		std::string getType() const;
		virtual ATarget *clone() const = 0;
		void getHitBySpell(ASpell const &spell) const;
		
};