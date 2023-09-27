#include "Serialization.hpp"

int main()
{
    Data *dados = new Data;
    
    dados->i = 19;
    dados->c = 'a';
    dados->d = 2.05;

    if (Serialization::deserialize(Serialization::serialize(dados)) == dados)
        std::cout << "Sucess!\n";
    else
        std::cout << "Error!\n";
    
    return 0;
}