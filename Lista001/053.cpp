#include <iostream>
using namespace std;

int main( void ) {
    float comprimento;
    float largura;
    float preco;
    float perimetro;
    float custo;

    cin >> comprimento >> largura >> preco;

    perimetro = comprimento * 2 + largura * 2;
    custo = perimetro * preco;

    cout << custo;    
    cout << endl;
    return 0;
}