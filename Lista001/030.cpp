#include <iostream>
using namespace std;

int main( void ) {
    float real;
    float cotacaoDolar;
    float correspondenteEmDolar;

    cin >> real;
    cin >> cotacaoDolar;
    
    correspondenteEmDolar = real * cotacaoDolar;

    cout << correspondenteEmDolar;    
    cout << endl;
    return 0;
}