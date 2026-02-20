/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:39:27 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 17:40:21 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP 
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(const std::string& newTarget);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;

	private:
		const std::string&	target;
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& other);
		const PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
};

#endif
