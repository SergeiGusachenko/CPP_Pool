/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:01:10 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 16:02:03 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(const AssaultTerminator &src);
		~AssaultTerminator(void);
		virtual void	battleCry(void) const;
		virtual void	meleeAttack(void) const;
		virtual void	rangedAttack(void) const;
		virtual ISpaceMarine  *clone(void) const;
		AssaultTerminator	&operator= (const AssaultTerminator &rhs);
};

#endif
