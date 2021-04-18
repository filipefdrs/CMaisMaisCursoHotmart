#include <iostream>
using namespace std;

int main( void ) {
    int integerNumber;

    cin >> integerNumber;

    cout << "Sum of successor of the triple and predecessor of the double: " << ((integerNumber * 3) + 1) + ((integerNumber * 2) - 1);   
    cout << endl;
    return 0;
}