#include <iostream>
using namespace std;

int main() 
{
    int num, menor;

    cout << "Ingrese 5 numeros enteros:" << endl;

    cin >> num;
    menor = num;

    for (int i = 1; i < 5; i++) {
        cin >> num;

        if (num < menor) {
            menor = num;
        }
    }

    cout << "El numero menor es: " << menor << endl;

    return 0;
}
