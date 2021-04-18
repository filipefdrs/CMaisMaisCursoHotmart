#include <iostream>
using namespace std;

int main( void ) {
    float importance;
    float first;
    float second;
    float third;

    cin >> importance;

    first = importance * 0.46;
    second = importance * 0.32;
    third = importance - first - second;

    cout << "First place: " << first << endl;
    cout << "Second place: " << second << endl;
    cout << "Third place: " << third << endl;    
    cout << endl;
    return 0;
}