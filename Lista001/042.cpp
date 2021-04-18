#include <iostream>
using namespace std;

int main( void ) {
    float baseSalary;
    float receivingAmount;

    cin >> baseSalary;
    receivingAmount = baseSalary + baseSalary * 0.02;

    cout << receivingAmount;
    cout << endl;
    return 0;
}