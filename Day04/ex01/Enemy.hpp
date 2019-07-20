/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:26:25 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 14:10:01 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
#include <iostream>
#include <string.h>

class Enemy
{
	protected:
		int hp;
		std::string type;
	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &rhs);
		Enemy	& operator=(Enemy const &rhs);
		virtual ~Enemy();
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};
#endif
