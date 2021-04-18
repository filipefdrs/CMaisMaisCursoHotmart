#include <iostream>
using namespace std;

int main( void ) {
    float productPrice;
    float withDiscount;

    cin >> productPrice;
    withDiscount = productPrice - (productPrice * 0.12);

    cout << withDiscount;    
    cout << endl;
    return 0;
}