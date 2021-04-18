#include <iostream>
using namespace std;

int main( void ) {
    float salary;
    float newSalary;

    cin >> salary;
    newSalary = salary + (salary * 0.25);

    cout << newSalary;    
    cout << endl;
    return 0;
}