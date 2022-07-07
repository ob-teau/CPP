/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:04:16 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 18:35:51 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	*this = src;}

Bureaucrat::Bureaucrat(const std::string name1, int grade1) :_name(name1), _grade(grade1){
	checkGrade(this->_grade);}

Bureaucrat::~Bureaucrat(){}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
	if (this != &rhs){
		this->_grade = rhs._grade;
		std::cout <<"Name is a constant variable, no modification possible" <<std::endl;}
	return *this;
}

std::string const & Bureaucrat::getName() const {
	return this->_name;}

int const &			Bureaucrat::getGrade() const {
	return this->_grade;}

void		Bureaucrat::grade_increment(){
	checkGrade(this->_grade - 1);
	this->_grade--;}

void		Bureaucrat::grade_decrement(){
	checkGrade(this->_grade + 1);
	this->_grade++;}

void		Bureaucrat::checkGrade(int x){
	if (x > 150){
		throw Bureaucrat::GradeTooLowException();}
	if (x < 1) {
		throw Bureaucrat::GradeTooHighException();}}

void	Bureaucrat::signForm(Form & form){
	try {
		form.beSigned(*this);
		std::cout <<this->_name <<" signed " <<form.getName() <<std::endl;}
	catch (std::exception & e){
		std::cout <<this->_name <<" couldn't sign " <<form.getName() <<" because Grade is Too low" <<std::endl;}}

std::ostream & operator<<(std::ostream & cout, const Bureaucrat & rhs){
	cout <<rhs.getName() <<", bureaucrat grade " <<rhs.getGrade() <<std::endl;
	return cout;}
