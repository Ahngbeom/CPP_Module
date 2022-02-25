/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:40:01 by bahn              #+#    #+#             */
/*   Updated: 2022/02/25 15:41:38 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_HPP
# define INTERN_HPP

# include <exception>
# include <cctype>

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
	
public:
	Intern();
	~Intern();

	Form*	makeForm(std::string const & targetForm, std::string const & formName);

	class NotMatchTheForm : public std::exception
	{
	private:
		std::string _error;
	public:
		NotMatchTheForm();
		~NotMatchTheForm() _NOEXCEPT;
		virtual const char*	what() const _NOEXCEPT;
	};
};

#endif