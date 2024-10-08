/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:00:55 by svydrina          #+#    #+#             */
/*   Updated: 2024/09/01 17:44:06 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "ASpell.hpp"

class Fwoosh : public ASpell{
	public:
		Fwoosh();
		~Fwoosh();
		Fwoosh *clone() const;
};
