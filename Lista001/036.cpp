#include <iostream>
using namespace std;

int main( void ) {
    float height;
    float radius;
    float volume;

    cin >> height >> radius;
    volume = 3.141592 * radius * radius * height;

    cout << volume;    
    cout << endl;
    return 0;
}