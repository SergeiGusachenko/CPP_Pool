/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <dezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 20:08:49 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/21 22:53:32 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include "AGameObjects.hpp"
#include "Rocket.hpp"
#include "Player.hpp"

class Enemy: public AGameObjects
{
	private:
		int render_counter;
		virtual void	attack(World *);
	public:
		Enemy(int speed, int x, int y);
		Enemy(const Enemy & src);
		virtual void	update(World *);
		virtual void	takeDamage();
		void			draw() const;
		void			interact_init(AGameObjects *obj);
		void			interact(Player *);
		void			interact(Enemy *);
		void			interact(Rocket *);
		void			interact(Asteroid *);
		~Enemy();

		Enemy & operator=(const Enemy & src);
};
#endif
