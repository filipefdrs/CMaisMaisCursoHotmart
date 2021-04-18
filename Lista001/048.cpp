#include <iostream>
using namespace std;

int main( void ) {
    int seconds;
    int hours;
    int minuts;

    cin >> seconds;
    
    hours = static_cast<int>(seconds / 3600);
    minuts = static_cast<int>((seconds - hours * 3600) / 60);
    seconds = seconds - (hours * 3600 + minuts * 60);

    cout << hours << " hour(s)" << endl;
    cout << minuts << " minut(s)" << endl;
    cout << seconds << " second(s)" << endl;

    cout << endl;
    return 0;
}