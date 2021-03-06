#ifndef __ICE_HPP__
#define __ICE_HPP__
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {

    public:
        Ice(void);
        Ice(Ice const &ref);
        virtual ~Ice(void);

        Ice			&operator=(Ice const &ref);
        AMateria	*clone() const;
        void		use(ICharacter &target);
};
#endif