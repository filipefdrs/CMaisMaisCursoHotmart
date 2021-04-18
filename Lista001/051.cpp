#include <iostream>
#include <cmath>
using namespace std;

int main( void ) {
    float x1, y1;
    float x2, y2;
    float distancia;
    x1 = y1 = 0.0;
    
    cin >> x2 >> y2;

    distancia = pow(pow(x2 - x1, 2) - pow(y2 - y1, 2), (1.0/2.0));
    
    cout << distancia;
    cout << endl;
    return 0;
}