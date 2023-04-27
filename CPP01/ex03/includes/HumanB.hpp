#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:

    public:
    HumanB();
    ~HumanB();
    Weapon      weapon;
    std::string name;
    void    attack();
}

#endif