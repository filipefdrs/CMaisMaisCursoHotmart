#include <iostream>
using namespace std;

int main( void ) {
    int number;
    int unidade;
    int dezena;
    int centena;
    int unidadeDeMilhar;

    cin >> number;

    unidade = number % 10;
    number = number - unidade;

    dezena = number % 100;
    number = number - dezena;
    dezena = static_cast<int>(dezena / 10);

    centena = number % 1000;
    number = number - centena;
    centena = static_cast<int>(centena / 100);

    unidadeDeMilhar = static_cast<int>(number / 1000);

    cout << unidadeDeMilhar << endl;
    cout << centena << endl;
    cout << dezena << endl;
    cout << unidade << endl;
    cout << endl;
    return 0;
}