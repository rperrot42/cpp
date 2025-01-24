
#ifndef FAKE_CONTACT_H
#define FAKE_CONTACT_H
#include <iostream>

class Contact {

public:
	Contact();
	std::string getName();
	std::string getFirstName();
	std::string getPhoneNumber();
	std::string getNickName();
	std::string	getDarkest();
	void 		setName(std::string name);
	void 		setFirstName(std::string firstName);
	void 		setPhoneNumber(std::string phoneNumber);
	void 		setNickName(std::string nickName);
	void 		setDarkest(std::string darkest);
	std::string toString();
	int 		addInfoContact();

private:
	std::string name;
	std::string firstName;
	std::string phoneNumber;
	std::string nickName;
	std::string darkest;
};

#endif //FAKE_CONTACT_H
