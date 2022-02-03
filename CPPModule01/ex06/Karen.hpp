/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:21:51 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/03 14:30:23 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
	private:

		void	debug(void);
		void	info(void);
		void	warning(void);
 		void	error(void);

	public:

		void	complain(std::string level);
};

#endif