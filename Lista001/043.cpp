#include <iostream>
using namespace std;

int main( void ) {
    float valorTotalLido;
    float totalAPagarComDesconto;
    float valorDeCadaParcela;
    float comissaoDoVendedorVendaAVista;
    float comissaoDoVendedorVendaAPrazo;

    cin >> valorTotalLido;

    totalAPagarComDesconto = valorTotalLido - valorTotalLido * 0.1;
    valorDeCadaParcela = valorTotalLido / 3.0;
    comissaoDoVendedorVendaAVista = totalAPagarComDesconto * 0.05;
    comissaoDoVendedorVendaAPrazo = valorTotalLido * 0.05;

    cout << totalAPagarComDesconto << endl;
    cout << valorDeCadaParcela << endl;
    cout << comissaoDoVendedorVendaAVista << endl;
    cout << comissaoDoVendedorVendaAPrazo << endl;
        
    cout << endl;
    return 0;
}