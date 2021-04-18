#include <iostream>
using namespace std;

int main( void ) {
    int number;
    int unidade;
    int dezena;
    int centena;

    cin >> number;

    unidade = number % 10;
    number = number - unidade;

    dezena = number % 100;
    number = number - dezena;
    dezena = dezena / 10;

    centena = number / 100;
    number = number - centena;

    number = (unidade * 100) + (dezena * 10) + centena;

    cout << number << endl;
    cout << endl;
    return 0;
}