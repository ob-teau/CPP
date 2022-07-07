/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:55:11 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/09 16:35:09 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <string>
# include <algorithm>
# include <sstream>
# include <fstream>

class Contact {

public:

	Contact(void);
	~Contact(void);

	int	exists;

	void	add_contact(int ind);
	void	search_contact(void);
	void	display_contact(void);

private:
	int	index;
	std::string		infos[6]; //index | fname | lname | nname | num | secret
	std::string		appel[6]; // = {"Index", "First Name", "Last Name", "Nickname", "Phone Number", "Darkest Secret"};

};

#endif
