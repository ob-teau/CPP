/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:04:16 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 19:42:24 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :_name("default"), _gradeSign(150), _gradeExe(150), _sign(false) {
	this->checkGrade();}

Form::Form(Form const & src) :_name(src._name), _gradeSign(src._gradeSign), _gradeExe(src._gradeExe), _sign(false){
	*this = src;}

Form::Form(const std::string name1, int gradeSign, int gradeExe) :_name(name1), _gradeSign(gradeSign), _gradeExe(gradeExe), _sign(false) {
	this->checkGrade();}

Form::~Form(){}

Form & Form::operator=(Form const & rhs){
	if (this != &rhs){
		this->_sign = rhs._sign;
		std::cout <<"Name, grade Sign and grade Exe are constant variables, no modification possible" <<std::endl;}
	return *this;
}

std::string const & Form::getName() const {
	return this->_name;}

int const &			Form::getGradeS() const {
	return this->_gradeSign;}

int const &			Form::getGradeE() const {
	return this->_gradeExe;}

bool const &			Form::getSign() const {
	return this->_sign;}

void	Form::beSigned(const Bureaucrat & bur) {
		if (bur.getGrade() <= this->_gradeSign)
			this->_sign = true;
		else
			throw Form::GradeTooLowToSignException();}

void		Form::checkGrade() const{
	if (this->_gradeExe > 150 || this->_gradeSign > 150){
		throw Form::GradeTooLowException();}
	if (this->_gradeExe < 1 || this->_gradeSign < 1) {
		throw Form::GradeTooHighException();}}

std::ostream & operator<<(std::ostream & cout, const Form & rhs){
	cout <<"name = " <<rhs.getName() <<", Grade Sign = " <<rhs.getGradeS() <<", Grade Exe = " <<rhs.getGradeE() <<", Sign = " <<rhs.getSign() <<std::endl;
	return cout;}
