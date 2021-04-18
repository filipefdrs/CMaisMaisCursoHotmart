#include <iostream>
using namespace std;

int main( void ) {
    float celsius, fahrenheit;

    cin >> celsius;
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    cout << fahrenheit;

    cout << endl;
        
    return 0;
}