/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:11:35 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 18:12:30 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstring>


// so, we need an array of AForm pointer,
// in which we will store the number of leaving AForm,
// and we should return a const pointer to to AForm so noone except 
class Intern
{
	public:
		Intern();
		~Intern();

		AForm	*makeForm(std::string formName);

	private:
		Intern(const Intern& other);
		Intern &operator=(const Intern& other);

		const static std::string existingForms[NB_DIFFERENT_FORMS]; 

		void	clear();
		void	resize();
		void	insert(AForm *ptr_form);

		AForm	**ptr_form_array;
		size_t	capacity;
		size_t	size;
};


#endif
