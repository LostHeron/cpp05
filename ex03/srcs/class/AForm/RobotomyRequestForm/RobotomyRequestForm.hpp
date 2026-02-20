/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:01:11 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 17:37:37 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(const std::string& newTarget);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const;

	private:
		const std::string&	target;
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& other);
		const RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
};

#endif
