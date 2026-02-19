/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExecuteGrade.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:41:41 by jweber            #+#    #+#             */
/*   Updated: 2026/02/18 18:01:14 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTEGRADE_HPP
# define EXECUTEGRADE_HPP

# include <ostream>

class ExecuteGrade
{
	public:
		ExecuteGrade(int value);
	
		int	getGrade() const;
	
	private:
		int	grade;
		ExecuteGrade();
		ExecuteGrade(const ExecuteGrade& other);
		ExecuteGrade& operator=(const ExecuteGrade& other);
};

std::ostream&	operator<<(std::ostream& os, const ExecuteGrade& sg);

#endif
