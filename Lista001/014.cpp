#include <iostream>
using namespace std;

int main( void ) {
    float anguloGraus;
    float anguloRadianos;

    cin >> anguloGraus;
    anguloRadianos = (anguloGraus * 3.14) / 180;

    cout << anguloRadianos;
    cout << endl;
        
    return 0;
}