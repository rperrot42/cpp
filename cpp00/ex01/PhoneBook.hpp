#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include "iostream"

class PhoneBook {

public:
	Contact *getListContact() const;
	void	setListContact(Contact *listContact);
	int		getContactIndice() const;
	void	setContactIndice(int contactIndice);
	int		getNbContact() const;
	void	setNbContact(int nb_contact);
	int 	addContact();
	int		search();
	void	printAllContact();
	PhoneBook();

private:
	Contact		listContact[8];
	int			contactIndice;
	int 		nbContact;
};

#endif