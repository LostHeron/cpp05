/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABureaucratExceptions.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:46:03 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 13:34:45 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABUREAUCRATEXCEPTION_HPP
# define ABUREAUCRATEXCEPTION_HPP

#include "AWorkExceptions.hpp"

class ABureaucratExceptions: public AWorkExceptions
{
	public:
		ABureaucratExceptions();
		virtual ~ABureaucratExceptions() throw();
		virtual const char * what() const throw() = 0;
};

#endif
