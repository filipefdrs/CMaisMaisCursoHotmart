#include <iostream>
using namespace std;

int main( void ) {
    float centimeters;
    float inches;

    cin >> centimeters;
    inches = centimeters / 2.54;

    cout << inches;

    cout << endl;
    return 0;
}