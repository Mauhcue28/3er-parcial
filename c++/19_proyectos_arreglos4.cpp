#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    char arreglo1[2];
    int arreglo2[3];
    arreglo1[1]='Fernando';
    arreglo1[2]='Oscar';
    arreglo2[1]=74;
    arreglo2[2]=56;
    arreglo2[3]=10;
    std::cout<<"arreglo 1";
    for (i=1; i<2; i++)
    {
        std::cout<<"el dato en la posicion "<< i <<" es: "<< arreglo1[i] <<std::endl;
    }
    std::cout<<"arreglo 2";
    for (i=1; i<3; i++)
    {
        std::cout<<"el dato en la posicion "<< i <<" es: "<<arreglo2[i] <<std::endl;
    }
    return 0;
}