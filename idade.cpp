#include <iostream>

extern int idade;

void suaIdade()
{    
    std::cout << "Digite sua idade: " << std::endl;
    std::cin >> idade;
    std::cout << "Sua idade eh: " << idade << std::endl;

    if(idade < 9 && idade > 0)
    {
        std::cout << "Voce ainda eh uma crianca" << std::endl;
    }

    else if(idade > 10 && idade < 17)
    {
        std::cout << "Voce eh um aborrecente" << std::endl;
    }

    else if(idade > 18 && idade < 65)
    {
        std::cout << "Voce eh maior de idade! " << std::endl;
    }    
    else if(idade > 65) 
    {
       std::cout << "Voce jah eh idoso" << std::endl;
    }
}