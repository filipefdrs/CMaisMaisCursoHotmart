#include <iostream>
using namespace std;

int main( void ) {
    float apostador1;
    float apostador2;
    float apostador3;
    float valorDoPremio;
    float totalInvestido;
    float proporcao1;
    float proporcao2;
    float proporcao3;

    cin >> apostador1;
    cin >> apostador2;
    cin >> apostador3;
    cin >> valorDoPremio;

    totalInvestido = apostador1 + apostador2 + apostador3;

    proporcao1 = valorDoPremio * ((apostador1 * 100.0) / totalInvestido);
    proporcao2 = valorDoPremio * ((apostador2 * 100.0) / totalInvestido);
    proporcao3 = valorDoPremio * ((apostador3 * 100.0) / totalInvestido);

    cout << "Apostador 1 ganharia:" << proporcao1 << endl;
    cout << "Apostador 2 ganharia:" << proporcao2 << endl;
    cout << "Apostador 3 ganharia:" << proporcao3 << endl;
    
    cout << endl;
    return 0;
}