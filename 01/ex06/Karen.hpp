#ifndef __KAREN_HPP__
#define __KAREN_HPP__
#include <iostream>

class Karen {
	private:
		std::string _levels[4];
		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);
	public:
		Karen();
		~Karen();
		void		complain(std::string level);
		std::string	getLevel(int level);
};

#endif