#include <iostream>
using namespace std;

int main( void ) {
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float mediaAritmetica;

    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    cin >> nota4;

    mediaAritmetica = (nota1 + nota2 + nota3 + nota4) / 4.0;

    cout << mediaAritmetica;    
    cout << endl;
    return 0;
}