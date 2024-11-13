//
// Created by rperrot on 11/12/24.
//

#ifndef HARL_HPP
#define  HARL_HPP

# include <iostream>

class Harl
{
	public:
		void complain(std::string str);
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};


#endif //EX05_HARL_H
