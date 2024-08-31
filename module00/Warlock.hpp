/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <svydrina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:36:33 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/31 20:43:19 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

class Warlock
{
private:
	std::string name;
	std::string title;
	Warlock(/* args */);
	Warlock(const Warlock& rhs);
	Warlock& operator=(const Warlock& rhs);
public:
	Warlock(std::string name, std::string title);
	~Warlock();
	std::string const getName() const;
	std::string const getTitle() const;
	void setTitle(std::string const title);
	void introduce() const;
};


