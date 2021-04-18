#include <iostream>
#include <cmath>
using namespace std;

int main( void ) {
    float a, b;
    float hipotenusa;

    cin >> a >> b;
    hipotenusa = sqrt(pow(a, 2) + pow(b, 2));

    cout << hipotenusa;    
    cout << endl;
    return 0;
}