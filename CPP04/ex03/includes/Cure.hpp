#ifndef CURE_HPP
# define CURE_HPP

class Cure
{
    private:
        std::string _type;
    
    public:
        void    clone(); // If clone Cure -> Add new Cure
        void    use( ICharacter &target );
}

#endif