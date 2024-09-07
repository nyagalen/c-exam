/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:01:22 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/31 22:09:42 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {}

Fwoosh *Fwoosh::clone() const{
	return new Fwoosh(*this);
}

