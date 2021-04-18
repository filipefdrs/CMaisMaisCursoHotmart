#include <iostream>
using namespace std;

int main( void ) {
    float hourPrice;
    float amountOfHours;
    float paidAmount;

    cin >> hourPrice >> amountOfHours;
    paidAmount = hourPrice * amountOfHours + (hourPrice * amountOfHours * 0.1);

    cout << paidAmount;
    cout << endl;
    return 0;
}