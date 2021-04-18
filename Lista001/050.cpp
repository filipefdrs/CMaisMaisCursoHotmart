#include <iostream>
using namespace std;

int main( void ) {
    //considere a idade que fará no ano atual, caso não tenha feito ainda
    int idade;
    int anoAtual;
    int anoDeNascimento;

    cin >> idade >> anoAtual;

    anoDeNascimento = anoAtual - idade;

    cout << anoDeNascimento;    
    cout << endl;
    return 0;
}