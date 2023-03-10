/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:27:52 by jlebre            #+#    #+#             */
/*   Updated: 2023/01/04 20:27:53 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void    help(int i);
	int		add(int i);
	void		search(int i);
	void	call(int nb);
};

#endif