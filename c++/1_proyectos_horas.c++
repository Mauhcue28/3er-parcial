#include <iostream>

int main()
{
    int h;
    std::cout << "Ingrese una hora en formato de 24 horas: ";
    std::cin >> h;
    
    if (h >= 1 && h < 12)
    {
        std::cout << "Buenos días" << std::endl;
    }
    else if (h >= 12 && h < 19)
    {
        std::cout << "Buenas tardes" << std::endl;
    }
    else if(h >= 19 && h <= 24)
    {
      std::cout<< "Benas noches"<< std::endl;
    }
    else
    {
        std::cout << "DATOS INVALIDOS" << std::endl;
    }

    return 0;
}
