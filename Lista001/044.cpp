#include <iostream>
#include <cmath>
using namespace std;

int main( void ) {
    float alturaDoDegrau;
    float alturaDesejada;
    float quantidadeDeDegraus;

    cin >> alturaDoDegrau >> alturaDesejada;
    quantidadeDeDegraus = alturaDesejada = alturaDoDegrau;

    cout << round(quantidadeDeDegraus); 
    cout << endl;
    return 0;
}