/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:57:11 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 17:37:30 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(const std::string& newTarget);
		~ShrubberyCreationForm();


		void	execute(Bureaucrat const & executor) const;

	private:
		const std::string	target;
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		const ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
};

#endif
