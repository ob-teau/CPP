/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:46:31 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/09 13:20:33 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
# include <string>
# include <cctype>

class PhoneBook {

	public :
		Contact	tab_contact[8];
		int		contact_nb;
		PhoneBook(void);
		~PhoneBook(void);

};

#endif
