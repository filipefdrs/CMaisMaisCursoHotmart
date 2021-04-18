#include <iostream>
using namespace std;

int main( void ) {
    float squaredMeters;
    float acre;

    cin >> squaredMeters;
    acre = squaredMeters * 0.000247;

    cout << acre;

    cout << endl;
    return 0;
}