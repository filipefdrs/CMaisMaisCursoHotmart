#include <iostream>
using namespace std;

int main( void ) {
    int workDays;
    float totalAmount;

    cin >> workDays;
    totalAmount = workDays * 30 - workDays * 0.08;

    cout << totalAmount;    
    cout << endl;
    return 0;
}