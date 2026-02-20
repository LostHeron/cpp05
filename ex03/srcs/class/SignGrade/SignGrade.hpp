/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SignGrade.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:41:41 by jweber            #+#    #+#             */
/*   Updated: 2026/02/18 18:01:20 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIGNGRADE_HPP 
# define SIGNGRADE_HPP 

# include <ostream>

class SignGrade
{
	public:
		SignGrade(int value);
	
		int	getGrade() const;
	
	private:
		int	grade;
		SignGrade();
		SignGrade(const SignGrade& other);
		SignGrade& operator=(const SignGrade& other);
};

std::ostream&	operator<<(std::ostream& os, const SignGrade& sg);

#endif
