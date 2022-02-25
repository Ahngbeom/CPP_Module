/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:42:50 by bahn              #+#    #+#             */
/*   Updated: 2022/02/25 15:38:13 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

# ifdef	__linux__
	# define _NOEXCEPT _GLIBCXX_USE_NOEXCEPT
# endif

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_executeGrade;
public:
	Form(const std::string name, const int signGrade, const int executeGrade);
	virtual ~Form();

	std::string	getName( void ) const ;
	int	getSignGrade( void ) const ;
	int	getExecuteGrade( void ) const ;
	bool	getSigned( void ) const ;
	
	void	beSigned(Bureaucrat& bureau);

	virtual void	execute(Bureaucrat const & executor) = 0;

	class GradeTooHighException : public std::exception {
		private:
			std::string	_error;
		public:
			GradeTooHighException(std::string error);
			~GradeTooHighException() _NOEXCEPT;
			virtual const char* what() const _NOEXCEPT;
	};
	
	class GradeTooLowException : public std::exception {
		private:
			std::string	_error;
		public:
			GradeTooLowException(std::string error);
			~GradeTooLowException() _NOEXCEPT;
			virtual const char* what() const _NOEXCEPT;
	};
	
};

std::ostream&	operator<<(std::ostream& ostrm, Form& form);

#endif