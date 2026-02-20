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
#include <cctype>

const std::string Intern::existingForms[NB_DIFFERENT_FORMS] 
	= {"robotomy", "presidential", "shrubbery"};

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
	this->clear();
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

#include <iostream>
AForm	*Intern::makeForm(std::string formName)
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
		std::cout << "nothing match the asked form\n";
	else if (nb_match == 1)
		std::cout << "form found is of type : " << this->existingForms[type] << "\n";
	else
		std::cout << "multiple form can match, be more precise\n";
	return (NULL);
}
