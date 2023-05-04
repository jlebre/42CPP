#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon      weapon;

    public:
        HumanA(std::string name, std::string arma);
        ~HumanA();
        void    attack();
};

#endif