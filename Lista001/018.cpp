#include <iostream>
using namespace std;

int main( void ) {
    float cubicMeters;
    float liters;

    cin >> cubicMeters;
    liters = 1000 * cubicMeters;

    cout << liters;

    cout << endl;
    return 0;
}