#include <iostream>
using namespace std;

int main( void ) {
    float anguloRadianos;
    float anguloGraus;

    cin >> anguloRadianos;
    anguloGraus = ( anguloRadianos * 180 ) / 3.14;

    cout << anguloGraus;
    cout << endl;
        
    return 0;
}