#ifndef ICE_HPP
# define ICE_HPP

class Ice
{
    private:
        std::string _type;
    
    public:
        void    clone(); // If clone Ice -> Add new Ice
        void    use( ICharacter &character );
}

#endif