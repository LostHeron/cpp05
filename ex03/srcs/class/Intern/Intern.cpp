/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:11:31 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 18:20:23 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>


const std::string Intern::existingForms[NB_DIFFERENT_FORMS] 
	= {"robotomy", "presidential", "shrubbery"};

static AForm *makeRobotomy(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

AForm *makePresidential(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

AForm *makeShrubbery(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *(*Intern::makingForms[NB_DIFFERENT_FORMS])(const std::string& target)
	= {&makeRobotomy, &makePresidential, &makeShrubbery}; 

makingForm makingForms[3] = {&makeRobotomy, &makePresidential, &makeShrubbery}; 

Intern::Intern():
	ptr_form_array(new AForm *[5]),
	capacity(5),
	size(0)
{
}

Intern::~Intern()
{
	this->clear();
}

void	Intern::clear()
{
	for (size_t i = 0; i < this->size; i++)
		delete this->ptr_form_array[i];
	delete[] ptr_form_array;
	this->ptr_form_array = NULL;
	this->size = 0;
	this->capacity = 0;
}

void	Intern::resize()
{
	size_t	new_size = this->size;
	size_t	new_capacity; 
	if (this->capacity == 0)
		new_capacity = 5;
	else
		new_capacity = this->capacity * 2;
	AForm **new_ptr_form_array = new AForm *[new_capacity];
	std::memcpy(new_ptr_form_array, this->ptr_form_array,
					this->size * sizeof(AForm *));
	delete[] ptr_form_array;
	this->ptr_form_array = new_ptr_form_array;
	this->size = new_size;
	this->capacity = new_capacity;
}

void	Intern::insert(AForm *ptr_form)
{
	if (this->size + 1 >= this->capacity)
	{
		this->resize();
	}
	this->ptr_form_array[this->size] = ptr_form;
	this->size++;
}

AForm	*Intern::makeForm(std::string formName, const std::string& target)
{
	if (this->check_matching_form(formName) != 0)
		return (NULL);
	for (size_t	i = 0; i < formName.size(); i++)
		formName[i] = std::tolower(formName[i]);
	for (size_t	i = 0; i < NB_DIFFERENT_FORMS; i++)
	{
		if (formName.find(this->existingForms[i]) != formName.npos)
		{
			AForm	*ptr_form = Intern::makingForms[i](target);
			this->insert(ptr_form);
			return (ptr_form);
		}
	}
	return (NULL);
}

int	Intern::check_matching_form(std::string formName)
{
	size_t	nb_match = 0;
	size_t	type;
	for (size_t	i = 0; i < formName.size(); i++)
		formName[i] = std::tolower(formName[i]);
	for (size_t	i = 0; i < NB_DIFFERENT_FORMS; i++)
	{
		if (formName.find(this->existingForms[i]) != formName.npos)
		{
			type = i;
			nb_match++;
		}
	}
	if (nb_match == 0)
	{
		std::cout << "can not create form: nothing match the asked form\n";
		return (1);
	}
	else if (nb_match > 1)
	{
		std::cout << "can not create form: multiple form can match, be more precise\n";
		return (1);
	}
	else
		std::cout << "form found is of type : " << this->existingForms[type] << "\n";
	return (0);
}
