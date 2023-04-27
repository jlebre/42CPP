#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:

    public:
    HumanA();
    ~HumanA();
    Weapon      weapon;
    std::string name;
    void    attack();
}

#endif