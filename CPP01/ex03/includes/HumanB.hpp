#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;

    public:
        HumanB(std::string nome);
        ~HumanB();
        void    setWeapon(Weapon &arma);
        void    attack();
};

#endif