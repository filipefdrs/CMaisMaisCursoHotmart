#include <iostream>
using namespace std;

int main( void ) {
    float radius;
    float circleArea;

    cin >> radius;
    circleArea = 3.141592 * radius * radius;

    cout << circleArea;    
    cout << endl;
    return 0;
}