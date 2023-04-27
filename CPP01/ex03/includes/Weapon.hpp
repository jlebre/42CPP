#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    private:
        std::string type;
    
    public:
        int &getType();
        void    setType(td::string type);
};

#endif