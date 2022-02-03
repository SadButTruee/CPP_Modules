/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed_is_for_losers.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:53:45 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/03 12:56:39 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_IS_FOR_LOSERS_H
# define SED_IS_FOR_LOSERS_H

# include <fstream>
# include <iostream>

int		ft_error(int a);
void	ft_search_replace(std::string& line, std::string s1, std::string s2);

#endif