#include <iostream>
#include <cctype>
using namespace std;

int main( void ) {
    char letter;
    
    cin >> letter;
    if( isalpha(letter) ) {
        cout << static_cast<char>(tolower(letter));
    }

    cout << endl;
    return 0;
}
