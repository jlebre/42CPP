#include "Serialization.hpp"

int main()
{
    Data *dados = new Data;
    
    dados->i = 19;
    dados->c = 'a';
    dados->d = 2.05;

    if (Serialization::deserialize(Serialization::serialize(dados)) == dados)
    {
        std::cout << "Sucess!\n";
        std::cout << "i: " << dados->i << std::endl;
        std::cout << "c: " << dados->c << std::endl;
        std::cout << "d: " << dados->d << std::endl;
    }
    else
        std::cout << "Error!\n";
    
    return 0;
}